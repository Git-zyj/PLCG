#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)167;
int var_5 = -567878799;
int var_7 = -1106978666;
long long int var_8 = 4033625519884813899LL;
int var_9 = 1139850691;
unsigned short var_10 = (unsigned short)34693;
int var_13 = 1314930409;
long long int var_14 = -1107367594278670458LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 1590971389152592919LL;
_Bool var_18 = (_Bool)1;
int var_19 = -1372356274;
int var_20 = -760840065;
unsigned int var_21 = 3708640677U;
unsigned int var_22 = 3808765827U;
signed char var_23 = (signed char)11;
unsigned short var_24 = (unsigned short)58935;
int var_25 = 825247602;
long long int arr_8 [19] [19] [19] ;
int arr_22 [23] [23] [23] ;
int arr_23 [23] [23] [23] ;
unsigned int arr_3 [15] ;
long long int arr_4 [15] ;
_Bool arr_13 [19] [19] ;
unsigned int arr_14 [19] ;
unsigned short arr_17 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 7034609103108462704LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 1374720226;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = -184002826;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 736134861U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -804113326309792951LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = 825767681U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30175 : (unsigned short)43748;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
