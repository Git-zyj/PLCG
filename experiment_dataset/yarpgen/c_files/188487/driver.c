#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 663368513386761599ULL;
signed char var_2 = (signed char)-70;
unsigned long long int var_3 = 2612759472839224206ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)185;
int zero = 0;
unsigned char var_13 = (unsigned char)74;
unsigned long long int var_14 = 6936543946180203847ULL;
unsigned int var_15 = 2988725467U;
_Bool var_16 = (_Bool)1;
signed char arr_1 [24] ;
unsigned char arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)76 : (signed char)34;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)212 : (unsigned char)242;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
