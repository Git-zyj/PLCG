#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)6304;
long long int var_3 = -8910870143418299632LL;
unsigned short var_4 = (unsigned short)41688;
unsigned int var_6 = 2302077920U;
int var_10 = -888336272;
int zero = 0;
unsigned short var_13 = (unsigned short)33311;
unsigned short var_14 = (unsigned short)33026;
unsigned long long int var_15 = 11377954309744951550ULL;
int var_16 = -654325846;
unsigned char arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)91;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
