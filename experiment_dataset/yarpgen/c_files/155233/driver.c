#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1481;
unsigned long long int var_1 = 17569811826804214822ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 7721161590608882545ULL;
short var_7 = (short)-17003;
unsigned short var_8 = (unsigned short)38110;
unsigned char var_9 = (unsigned char)222;
unsigned int var_10 = 2742532590U;
signed char var_11 = (signed char)61;
unsigned short var_13 = (unsigned short)34899;
int zero = 0;
unsigned char var_14 = (unsigned char)171;
unsigned long long int var_15 = 4237831861812872522ULL;
unsigned short var_16 = (unsigned short)6268;
_Bool var_17 = (_Bool)0;
unsigned long long int arr_0 [19] ;
unsigned short arr_5 [19] [19] ;
long long int arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 16006843884593886201ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)12177;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 1830155502092426981LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
