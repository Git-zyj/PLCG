#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13593277812596711561ULL;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)30744;
unsigned char var_3 = (unsigned char)0;
signed char var_4 = (signed char)77;
long long int var_5 = 2702852362396176602LL;
unsigned short var_8 = (unsigned short)52928;
unsigned int var_9 = 3489395320U;
_Bool var_10 = (_Bool)1;
int var_11 = -1546323514;
unsigned long long int var_12 = 3769610068694003436ULL;
unsigned long long int var_13 = 15841761707142539935ULL;
unsigned short var_14 = (unsigned short)49669;
unsigned short var_15 = (unsigned short)35368;
unsigned long long int var_16 = 650990374908942261ULL;
_Bool var_17 = (_Bool)1;
short var_19 = (short)27659;
int zero = 0;
short var_20 = (short)2137;
unsigned int var_21 = 113744852U;
long long int var_22 = -8501211005156276677LL;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)7055;
signed char var_25 = (signed char)-41;
int var_26 = 580757525;
unsigned short var_27 = (unsigned short)44362;
short var_28 = (short)-20552;
int var_29 = 1954066485;
int var_30 = -1976385602;
int arr_0 [23] [23] ;
unsigned int arr_1 [23] ;
int arr_3 [23] ;
int arr_5 [23] ;
unsigned long long int arr_6 [23] ;
long long int arr_8 [23] [23] [23] [23] [23] [23] ;
unsigned int arr_9 [23] [23] [23] ;
long long int arr_10 [23] [23] ;
unsigned short arr_11 [23] [23] ;
int arr_13 [23] [23] [23] ;
int arr_15 [10] ;
unsigned int arr_16 [10] ;
unsigned int arr_17 [10] [10] ;
int arr_14 [23] [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 1482479356;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 544144166U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -311159786;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1279640861 : 576835503;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 13563339813447752267ULL : 18216773963467733961ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? -32534124265167679LL : -5614106488588651412LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 3733317308U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = -3117867774224735644LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)47976;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1159642507 : -1125358439;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = -348010576;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = 1251398031U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_17 [i_0] [i_1] = 2039819181U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? -1921146068 : 1686908926;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
