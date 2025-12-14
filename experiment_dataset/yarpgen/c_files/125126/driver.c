#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8437280137072919588LL;
int var_3 = -2020124606;
int var_5 = -862241264;
short var_7 = (short)-783;
int var_8 = 1091387888;
unsigned long long int var_9 = 16759988248597034307ULL;
unsigned char var_10 = (unsigned char)234;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3996583178U;
unsigned int var_16 = 1337843160U;
int zero = 0;
long long int var_17 = 8926600386914538256LL;
unsigned int var_18 = 4269044081U;
unsigned int var_19 = 1196617007U;
unsigned int var_20 = 1429542479U;
unsigned int var_21 = 3950156263U;
unsigned long long int var_22 = 9293531754651501472ULL;
long long int var_23 = 6002434053208425329LL;
unsigned short var_24 = (unsigned short)50760;
long long int var_25 = 4979612489559976489LL;
signed char var_26 = (signed char)48;
short arr_2 [20] [20] [20] ;
signed char arr_3 [20] ;
signed char arr_4 [20] ;
unsigned long long int arr_5 [20] ;
unsigned int arr_7 [20] [20] [20] ;
unsigned int arr_17 [20] [20] ;
unsigned int arr_18 [20] [20] [20] ;
int arr_19 [20] [20] [20] ;
unsigned int arr_8 [20] ;
_Bool arr_12 [20] ;
int arr_13 [20] ;
unsigned int arr_23 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)4473;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 12322712391163557874ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2940002286U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 1688088183U : 3164602858U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 225453973U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 1983127905;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 2707566102U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = 1475805599;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 151700144U : 4098457319U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
