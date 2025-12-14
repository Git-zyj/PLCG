#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5413555048303818104LL;
unsigned long long int var_3 = 17979779609431440551ULL;
unsigned char var_5 = (unsigned char)49;
short var_6 = (short)22604;
signed char var_7 = (signed char)7;
unsigned char var_8 = (unsigned char)190;
int var_9 = 1714169962;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 413664482U;
signed char var_13 = (signed char)57;
short var_14 = (short)-5422;
unsigned char var_15 = (unsigned char)195;
unsigned int var_16 = 1564092994U;
unsigned long long int var_17 = 7798292323585901717ULL;
signed char var_18 = (signed char)-113;
unsigned char var_19 = (unsigned char)95;
signed char var_20 = (signed char)63;
unsigned short var_21 = (unsigned short)13205;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 2829457778U;
signed char var_24 = (signed char)94;
unsigned long long int arr_0 [15] [15] ;
signed char arr_1 [15] ;
short arr_2 [15] ;
_Bool arr_3 [15] ;
unsigned long long int arr_5 [15] ;
int arr_6 [15] [15] ;
long long int arr_7 [15] ;
unsigned short arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 8173541510013281520ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)-26073;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 4884955655493574173ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 1824458926;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 1831516596748435740LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)35302;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
