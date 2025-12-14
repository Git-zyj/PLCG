#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -6262022441278013403LL;
unsigned char var_8 = (unsigned char)171;
unsigned int var_10 = 346399051U;
int zero = 0;
unsigned char var_18 = (unsigned char)44;
unsigned int var_19 = 1434311323U;
unsigned char var_20 = (unsigned char)179;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 5365580461520924642ULL;
int var_23 = 1863141769;
unsigned long long int var_24 = 1816889360603436111ULL;
short arr_0 [15] ;
unsigned long long int arr_1 [15] ;
_Bool arr_2 [15] ;
short arr_3 [15] ;
_Bool arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-22448;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 13355753114038310505ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-5279;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
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
