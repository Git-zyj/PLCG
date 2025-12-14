#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-32705;
long long int var_3 = -2838682723283238251LL;
unsigned short var_4 = (unsigned short)63582;
unsigned char var_5 = (unsigned char)236;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)225;
int zero = 0;
long long int var_10 = -3992575521518129834LL;
int var_11 = -1911861683;
int var_12 = -421605682;
_Bool var_13 = (_Bool)0;
long long int var_14 = -815663170877265915LL;
short var_15 = (short)-29622;
unsigned short var_16 = (unsigned short)50169;
int arr_0 [15] ;
_Bool arr_1 [15] ;
unsigned char arr_7 [10] ;
int arr_9 [10] ;
unsigned char arr_2 [15] ;
int arr_5 [11] ;
int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1556016095;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)30 : (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 657519004;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = -1180293669;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = -531181638;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
