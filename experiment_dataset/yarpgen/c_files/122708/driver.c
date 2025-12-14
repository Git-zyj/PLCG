#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9151019900120814325LL;
int var_5 = 83549327;
unsigned int var_6 = 621255892U;
int zero = 0;
unsigned long long int var_10 = 9339098160653418908ULL;
long long int var_11 = -2862002215297381116LL;
unsigned int var_12 = 2897666315U;
long long int var_13 = -5374603392050915866LL;
unsigned int var_14 = 3204848029U;
unsigned int var_15 = 1700976624U;
_Bool var_16 = (_Bool)1;
int arr_0 [25] ;
unsigned short arr_1 [25] ;
unsigned char arr_2 [25] ;
unsigned char arr_4 [11] ;
int arr_5 [11] ;
unsigned int arr_6 [11] [11] ;
_Bool arr_7 [11] [11] ;
unsigned int arr_8 [11] ;
unsigned char arr_9 [11] [11] ;
unsigned short arr_14 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 957829286;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)52302;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = -1959078773;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 161229693U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 3180515727U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (unsigned short)58514;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
