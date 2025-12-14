#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)247;
signed char var_2 = (signed char)-12;
signed char var_4 = (signed char)45;
unsigned long long int var_8 = 6326462296253314237ULL;
unsigned int var_11 = 3870392388U;
unsigned char var_12 = (unsigned char)131;
unsigned char var_13 = (unsigned char)212;
int zero = 0;
short var_14 = (short)28298;
long long int var_15 = 2042155286757720363LL;
unsigned char var_16 = (unsigned char)208;
long long int var_17 = -8051631983196679085LL;
unsigned short var_18 = (unsigned short)9721;
unsigned char var_19 = (unsigned char)70;
unsigned long long int arr_0 [18] ;
unsigned int arr_1 [18] ;
long long int arr_2 [18] ;
long long int arr_5 [18] ;
unsigned short arr_3 [18] ;
_Bool arr_10 [18] ;
long long int arr_11 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 6953162642691616122ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 574924413U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 8037953515808966112LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -5999527453813530537LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)1827;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = -3549088091346930946LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
