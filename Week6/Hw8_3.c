#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int row, col;

    printf("Enter the number of rows : ");
    scanf("%d", &row);
    printf("Enter the number of columns : ");
    scanf("%d", &col);

    for(int i = 1;i<=row;i++){
        for(int j = 1;j<=col;j++)
            printf("%d", i);
        printf("\n");
    }
}