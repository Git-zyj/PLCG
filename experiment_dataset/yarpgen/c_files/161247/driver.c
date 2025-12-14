#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 6567942723331883053LL;
int zero = 0;
long long int var_20 = -8865753597845145749LL;
short var_21 = (short)-6266;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)13847;
long long int var_24 = -3984899096714476890LL;
long long int var_25 = 7462723813768062749LL;
short var_26 = (short)13593;
unsigned long long int var_27 = 1003957152486742782ULL;
unsigned long long int var_28 = 12279837901961595692ULL;
long long int var_29 = -3588391942608274402LL;
unsigned long long int var_30 = 3797913385862892767ULL;
_Bool var_31 = (_Bool)1;
short arr_0 [17] ;
unsigned char arr_1 [17] [17] ;
_Bool arr_2 [19] ;
unsigned short arr_3 [19] ;
_Bool arr_4 [19] [19] ;
long long int arr_5 [19] [19] ;
unsigned char arr_6 [19] [19] ;
unsigned short arr_7 [19] ;
unsigned int arr_9 [19] ;
unsigned long long int arr_14 [19] [19] [19] [19] [19] ;
unsigned int arr_15 [19] [19] ;
long long int arr_17 [19] [19] ;
int arr_20 [19] ;
unsigned int arr_21 [19] [19] ;
long long int arr_22 [19] [19] [19] ;
unsigned long long int arr_27 [19] ;
long long int arr_18 [19] [19] [19] [19] ;
long long int arr_19 [19] ;
short arr_29 [19] ;
unsigned int arr_30 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)4864;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)15598;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 6346321339913479144LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned short)44030;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 715349528U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 4629198209945566324ULL : 4261281830947547281ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = 4008623102U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = -6190394682867387379LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = 1034803838;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = 1141791876U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = -147434080755148477LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = 9284581386100341524ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -1538654725456878582LL : 5449820208170032510LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = -8560085388267012583LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = (short)-14213;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = 2091266578U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
