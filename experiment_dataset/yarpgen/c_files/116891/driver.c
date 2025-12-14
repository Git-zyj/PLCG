#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-22;
unsigned char var_3 = (unsigned char)168;
int var_7 = -546115322;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 4692772292072185680ULL;
unsigned short var_11 = (unsigned short)25253;
short var_13 = (short)28835;
short var_14 = (short)-16129;
signed char var_15 = (signed char)-33;
unsigned short var_16 = (unsigned short)14887;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-93;
unsigned int var_19 = 524665109U;
short var_20 = (short)-3109;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 4172146730U;
unsigned int var_23 = 2291535081U;
unsigned long long int var_24 = 7338131949911298006ULL;
long long int var_25 = 360899183537563713LL;
unsigned char var_26 = (unsigned char)155;
long long int var_27 = -5379480981669560547LL;
unsigned int arr_0 [23] [23] ;
short arr_1 [23] ;
_Bool arr_2 [23] ;
signed char arr_3 [23] ;
long long int arr_6 [23] ;
short arr_8 [23] ;
short arr_15 [23] [23] ;
signed char arr_16 [23] ;
unsigned int arr_4 [23] ;
short arr_5 [23] ;
_Bool arr_10 [23] [23] ;
_Bool arr_13 [23] [23] ;
_Bool arr_17 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 367476913U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-15490;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 8203539969825548354LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-15412 : (short)2641;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-28322;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (signed char)93 : (signed char)-68;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 55995156U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)21483;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
