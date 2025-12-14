#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3446300651U;
unsigned char var_4 = (unsigned char)106;
signed char var_5 = (signed char)-64;
unsigned short var_6 = (unsigned short)30795;
long long int var_8 = -2045210197340848553LL;
unsigned char var_11 = (unsigned char)223;
unsigned char var_12 = (unsigned char)20;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)18566;
signed char var_16 = (signed char)-4;
unsigned int var_17 = 3631647475U;
unsigned int var_18 = 3150583048U;
long long int var_19 = -7755366970009987675LL;
unsigned char var_20 = (unsigned char)131;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)127;
long long int var_23 = 6746493591502573293LL;
unsigned short var_24 = (unsigned short)51294;
int var_25 = -1527341300;
int var_26 = 166685335;
unsigned int var_27 = 3877352872U;
signed char var_28 = (signed char)49;
unsigned int var_29 = 2043615768U;
long long int var_30 = -7424019544397541908LL;
long long int var_31 = -544395107962290345LL;
int var_32 = 151255819;
short var_33 = (short)12518;
signed char arr_0 [23] [23] ;
long long int arr_1 [23] [23] ;
unsigned int arr_2 [10] ;
unsigned int arr_3 [10] ;
unsigned char arr_4 [10] [10] ;
unsigned long long int arr_8 [10] [10] ;
int arr_12 [10] [10] [10] [10] ;
long long int arr_13 [10] ;
unsigned char arr_14 [10] [10] [10] [10] [10] ;
int arr_16 [10] [10] [10] [10] [10] ;
_Bool arr_17 [10] [10] [10] [10] ;
unsigned int arr_19 [10] [10] [10] [10] ;
unsigned short arr_20 [10] ;
unsigned long long int arr_22 [10] [10] [10] ;
unsigned long long int arr_23 [10] [10] [10] [10] ;
int arr_29 [10] [10] ;
signed char arr_34 [10] ;
signed char arr_5 [10] ;
unsigned int arr_6 [10] ;
short arr_18 [10] [10] [10] [10] ;
signed char arr_27 [10] [10] [10] [10] ;
int arr_32 [10] [10] ;
int arr_36 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 1897103287905993712LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 4217922589U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 2993317410U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 14620006849904481862ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -199599643;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 4785696420236664706LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 2119550649;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 3446781711U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (unsigned short)63377;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 13006601435152744000ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 11357592724037726032ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_29 [i_0] [i_1] = -515309377;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_34 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 1862527589U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (short)-23128;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_32 [i_0] [i_1] = 569312686;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_36 [i_0] = 462140057;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
