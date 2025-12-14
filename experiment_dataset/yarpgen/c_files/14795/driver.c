#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3926881579U;
unsigned short var_1 = (unsigned short)35241;
unsigned int var_2 = 2688189081U;
unsigned char var_3 = (unsigned char)194;
signed char var_4 = (signed char)113;
unsigned long long int var_5 = 9355548683894049010ULL;
short var_6 = (short)31908;
long long int var_7 = -5713270221942277704LL;
unsigned char var_8 = (unsigned char)158;
int var_9 = 1665427191;
unsigned char var_10 = (unsigned char)91;
unsigned char var_11 = (unsigned char)132;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_13 = 1426171562;
long long int var_14 = -7265636184915071220LL;
unsigned short var_15 = (unsigned short)9246;
unsigned int var_16 = 914292282U;
unsigned char var_17 = (unsigned char)142;
signed char var_18 = (signed char)13;
unsigned char var_19 = (unsigned char)146;
long long int var_20 = -7210249254143504593LL;
_Bool arr_4 [11] ;
long long int arr_11 [11] [11] [11] ;
long long int arr_16 [23] ;
unsigned short arr_20 [21] ;
unsigned long long int arr_21 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 7982863795586614743LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = -5798148579486181114LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (unsigned short)63481;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = 14650918488414126552ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
