#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11370873888818593747ULL;
short var_2 = (short)-9475;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)78;
unsigned char var_5 = (unsigned char)52;
unsigned int var_7 = 1056247572U;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)81;
unsigned int var_12 = 3154879835U;
int zero = 0;
unsigned short var_13 = (unsigned short)9942;
signed char var_14 = (signed char)-112;
long long int var_15 = 588011561202815454LL;
unsigned short var_16 = (unsigned short)61616;
unsigned long long int var_17 = 13314239398807104480ULL;
_Bool arr_0 [10] ;
unsigned char arr_9 [10] ;
int arr_10 [14] ;
unsigned long long int arr_11 [14] ;
unsigned char arr_12 [14] ;
unsigned int arr_13 [25] ;
unsigned long long int arr_14 [25] [25] ;
unsigned char arr_15 [25] [25] ;
unsigned long long int arr_16 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 1945802268;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 15514809971883094636ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 3232004164U : 2065338069U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = 283701541395299090ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)82 : (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 15050329259145898633ULL : 2638714065725081757ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
