#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1922932004;
short var_3 = (short)-15854;
long long int var_4 = -7929058798092361885LL;
long long int var_6 = 8327485964874503785LL;
unsigned char var_7 = (unsigned char)161;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 874297505U;
unsigned short var_14 = (unsigned short)10560;
unsigned int var_15 = 2223229480U;
unsigned char var_16 = (unsigned char)190;
int zero = 0;
unsigned int var_17 = 496063006U;
unsigned int var_18 = 3835738331U;
unsigned int var_19 = 4082670277U;
short var_20 = (short)1339;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 16490969401859097251ULL;
short var_23 = (short)20962;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 10750718684719430640ULL;
long long int arr_0 [22] [22] ;
unsigned long long int arr_1 [22] [22] ;
int arr_3 [20] ;
long long int arr_5 [19] [19] ;
int arr_6 [19] ;
long long int arr_8 [14] ;
long long int arr_9 [14] ;
long long int arr_10 [14] ;
unsigned char arr_12 [10] ;
unsigned int arr_13 [10] ;
unsigned long long int arr_14 [10] ;
_Bool arr_2 [22] ;
unsigned short arr_7 [19] ;
unsigned long long int arr_15 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 4133051407149563812LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 2447611883143619056ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1348578970;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 4275774965838744721LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 1810081969;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 5925754466881353093LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = -4774177265034786214LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = -2165401725471351347LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 441277667U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 512422682540278724ULL : 14061008636919994819ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned short)55977;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? 16875251935220061700ULL : 10763885823911715363ULL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
