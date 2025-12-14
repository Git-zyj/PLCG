#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -711442205;
unsigned short var_4 = (unsigned short)58608;
unsigned char var_5 = (unsigned char)197;
unsigned char var_6 = (unsigned char)64;
unsigned short var_13 = (unsigned short)5205;
int var_15 = -1334609386;
int zero = 0;
unsigned int var_19 = 2843934880U;
int var_20 = 585582169;
unsigned char var_21 = (unsigned char)3;
long long int var_22 = -2461779112717974547LL;
unsigned char var_23 = (unsigned char)42;
int arr_2 [10] ;
short arr_4 [15] [15] ;
unsigned char arr_5 [15] [15] ;
unsigned char arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1952271060;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-27681;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)19;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
