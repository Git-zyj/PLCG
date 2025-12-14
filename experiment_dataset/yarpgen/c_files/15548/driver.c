#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)42459;
short var_4 = (short)-14891;
short var_10 = (short)-7679;
unsigned char var_12 = (unsigned char)18;
int var_13 = 1417098806;
int zero = 0;
short var_14 = (short)-28470;
unsigned long long int var_15 = 7694390472585974426ULL;
unsigned char var_16 = (unsigned char)234;
short var_17 = (short)26729;
short arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)6833;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
