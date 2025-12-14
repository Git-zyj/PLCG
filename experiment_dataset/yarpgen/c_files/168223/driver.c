#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-853;
unsigned char var_5 = (unsigned char)58;
short var_6 = (short)-8032;
unsigned char var_7 = (unsigned char)221;
unsigned short var_10 = (unsigned short)24061;
int zero = 0;
unsigned int var_16 = 1749284232U;
unsigned short var_17 = (unsigned short)6944;
signed char var_18 = (signed char)27;
unsigned short var_19 = (unsigned short)14778;
int var_20 = 1217893375;
unsigned short arr_0 [16] ;
unsigned int arr_1 [16] ;
short arr_3 [21] ;
int arr_4 [21] ;
long long int arr_5 [21] ;
int arr_2 [16] ;
long long int arr_6 [21] ;
unsigned char arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)53773 : (unsigned short)42436;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1802705838U : 2492224734U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)-15005;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -13631040;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 32988121001088188LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -463580254 : -909167849;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -4064692827628216386LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned char)227;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
