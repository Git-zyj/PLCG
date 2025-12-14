#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 11671263673757956671ULL;
long long int var_2 = -3643780149028339358LL;
int var_3 = -610685656;
unsigned long long int var_5 = 139903358385353041ULL;
unsigned long long int var_6 = 10315360844768322536ULL;
short var_7 = (short)-17450;
unsigned char var_8 = (unsigned char)201;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-88;
unsigned int var_15 = 608013202U;
signed char var_17 = (signed char)-75;
unsigned long long int var_18 = 8077546346566637812ULL;
int zero = 0;
int var_20 = 1493877501;
unsigned char var_21 = (unsigned char)8;
unsigned char var_22 = (unsigned char)137;
signed char var_23 = (signed char)(-127 - 1);
unsigned int var_24 = 2221666163U;
unsigned char var_25 = (unsigned char)13;
unsigned int var_26 = 1677783275U;
unsigned int var_27 = 656556826U;
unsigned int var_28 = 4282066733U;
int var_29 = 1898196487;
signed char var_30 = (signed char)76;
_Bool arr_0 [15] ;
unsigned char arr_1 [15] ;
unsigned char arr_4 [15] [15] ;
_Bool arr_6 [19] [19] ;
long long int arr_7 [19] [19] ;
unsigned int arr_12 [19] ;
unsigned short arr_2 [15] [15] ;
unsigned long long int arr_5 [15] [15] ;
int arr_8 [19] ;
unsigned int arr_9 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = -8034866964542508312LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 4018316816U : 2599440329U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)39489;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 10091180473334878333ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 2027987043;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 3726981316U;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
