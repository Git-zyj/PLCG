#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -3229724;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)28595;
unsigned short var_6 = (unsigned short)8848;
unsigned short var_7 = (unsigned short)61760;
short var_8 = (short)10173;
unsigned int var_9 = 2392896211U;
unsigned short var_10 = (unsigned short)31091;
unsigned short var_12 = (unsigned short)32355;
unsigned int var_13 = 2914559492U;
int zero = 0;
unsigned int var_14 = 3376833105U;
short var_15 = (short)29062;
long long int var_16 = -6369629693678114890LL;
unsigned char var_17 = (unsigned char)168;
_Bool var_18 = (_Bool)1;
long long int var_19 = -4049932946419941243LL;
unsigned int var_20 = 3871599875U;
unsigned int var_21 = 3067700205U;
int var_22 = 670823252;
short var_23 = (short)-20470;
short var_24 = (short)8126;
unsigned long long int arr_1 [20] [20] ;
unsigned char arr_2 [20] [20] ;
unsigned short arr_3 [20] ;
unsigned short arr_4 [20] [20] [20] ;
int arr_5 [20] [20] ;
short arr_6 [20] [20] ;
short arr_7 [20] [20] [20] ;
_Bool arr_11 [11] [11] [11] ;
int arr_12 [11] [11] [11] ;
unsigned char arr_18 [11] [11] [11] [11] ;
signed char arr_19 [11] [11] [11] [11] ;
short arr_20 [11] ;
unsigned int arr_21 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 12703607616716745028ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)52586;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)38543;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 1127795203;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (short)6519;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)12878;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -125379955;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = (short)-18788;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = 1038074246U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
