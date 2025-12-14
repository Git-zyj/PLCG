#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62117;
unsigned short var_4 = (unsigned short)19390;
unsigned char var_8 = (unsigned char)44;
unsigned char var_11 = (unsigned char)38;
int zero = 0;
signed char var_12 = (signed char)-97;
long long int var_13 = 3572302228856295987LL;
unsigned char var_14 = (unsigned char)112;
unsigned long long int var_15 = 7681310969052886612ULL;
unsigned long long int var_16 = 12741259788442015168ULL;
unsigned long long int var_17 = 122077217681727428ULL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 16633403590313142728ULL;
signed char var_20 = (signed char)-46;
long long int var_21 = 2609847473946761065LL;
unsigned short arr_3 [16] [16] ;
unsigned char arr_5 [18] [18] ;
unsigned short arr_7 [18] [18] ;
signed char arr_9 [18] [18] ;
int arr_13 [19] ;
short arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)18883 : (unsigned short)7210;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)50912;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = -911234286;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (short)-20260;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
