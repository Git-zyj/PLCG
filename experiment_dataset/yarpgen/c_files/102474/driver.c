#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
short var_2 = (short)11115;
short var_3 = (short)19400;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 118133314U;
unsigned long long int var_6 = 3403055734038292872ULL;
short var_7 = (short)2915;
short var_8 = (short)22935;
long long int var_9 = 4693331651947244153LL;
unsigned long long int var_10 = 5868550206686593ULL;
int var_11 = -2034403663;
long long int var_14 = 2933099229903915169LL;
short var_15 = (short)18191;
int zero = 0;
unsigned short var_16 = (unsigned short)42550;
short var_17 = (short)-14480;
int var_18 = 381674224;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)11;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)54;
long long int var_24 = -2399225845740258782LL;
short var_25 = (short)14108;
unsigned char var_26 = (unsigned char)54;
unsigned int arr_1 [24] [24] ;
unsigned int arr_6 [24] [24] [24] ;
unsigned short arr_7 [24] [24] [24] [24] ;
int arr_16 [19] [19] ;
unsigned short arr_17 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 3272764490U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2238528257U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)33839;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = 2073763437;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (unsigned short)17191;
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
