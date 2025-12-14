#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8164830145126845501LL;
unsigned char var_1 = (unsigned char)48;
int var_2 = 1478935812;
long long int var_3 = 3406048781195273241LL;
long long int var_4 = 2097621246059072070LL;
unsigned int var_5 = 874185358U;
unsigned char var_8 = (unsigned char)237;
unsigned char var_10 = (unsigned char)114;
int zero = 0;
unsigned int var_11 = 870358819U;
long long int var_12 = -5548331984047947299LL;
short var_13 = (short)-30773;
int var_14 = 449704882;
long long int var_15 = -8626940906910281906LL;
_Bool var_16 = (_Bool)1;
long long int var_17 = 7664018839571547920LL;
short var_18 = (short)19746;
unsigned char var_19 = (unsigned char)122;
unsigned char var_20 = (unsigned char)172;
int var_21 = -1318456005;
unsigned char arr_2 [23] ;
short arr_5 [23] ;
unsigned char arr_6 [23] ;
unsigned char arr_7 [23] ;
unsigned char arr_10 [23] ;
unsigned long long int arr_11 [23] ;
unsigned long long int arr_14 [10] ;
long long int arr_4 [23] ;
unsigned long long int arr_9 [23] [23] ;
short arr_13 [23] [23] ;
short arr_18 [10] ;
unsigned short arr_19 [10] [10] ;
int arr_22 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)-1887;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 14420237502415734524ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 11939704497857032765ULL : 8617589535623522464ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -8103398364111120338LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 966789145797513451ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (short)28631;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)24333 : (short)2184;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)9393 : (unsigned short)12391;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = 2008551294;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
