#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)224;
long long int var_5 = -5458569641191579530LL;
unsigned short var_6 = (unsigned short)23950;
unsigned short var_7 = (unsigned short)16859;
unsigned char var_8 = (unsigned char)131;
signed char var_10 = (signed char)-5;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-21132;
signed char var_16 = (signed char)123;
signed char var_17 = (signed char)-39;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)102;
unsigned char var_20 = (unsigned char)60;
unsigned long long int var_21 = 9661789443985131094ULL;
long long int var_22 = -4435296843108230704LL;
unsigned long long int var_23 = 16427988675389723694ULL;
signed char arr_2 [16] [16] ;
unsigned long long int arr_5 [20] [20] ;
signed char arr_6 [20] ;
unsigned short arr_9 [20] [20] ;
int arr_10 [20] ;
int arr_3 [16] ;
unsigned char arr_11 [20] [20] [20] ;
short arr_12 [20] [20] ;
unsigned long long int arr_13 [20] ;
int arr_16 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 17776586242106996551ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)16149;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 1772857732;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1609967396 : -861364983;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (short)2348;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = 11127955079769626813ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = 57538009;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
