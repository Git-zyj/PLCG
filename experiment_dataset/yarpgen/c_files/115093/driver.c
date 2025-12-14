#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29038;
long long int var_1 = 5721417475510430908LL;
int var_2 = 89880133;
long long int var_3 = 8289705176874647068LL;
unsigned short var_5 = (unsigned short)62315;
signed char var_6 = (signed char)-57;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 13012989327090969910ULL;
unsigned long long int var_9 = 14026152220119488976ULL;
signed char var_10 = (signed char)99;
signed char var_11 = (signed char)-71;
int zero = 0;
short var_12 = (short)-19257;
long long int var_13 = -3275154387368294164LL;
unsigned short var_14 = (unsigned short)36973;
unsigned short var_15 = (unsigned short)5737;
unsigned char var_16 = (unsigned char)202;
unsigned char var_17 = (unsigned char)149;
short arr_0 [23] ;
unsigned long long int arr_1 [23] ;
long long int arr_2 [23] [23] ;
unsigned int arr_3 [23] ;
unsigned short arr_10 [11] [11] [11] ;
unsigned long long int arr_14 [11] [11] [11] ;
_Bool arr_15 [21] ;
_Bool arr_4 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-15762;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 488273431797566852ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 1881525593669770316LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 90629101U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)51317;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 12280907314270748471ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
