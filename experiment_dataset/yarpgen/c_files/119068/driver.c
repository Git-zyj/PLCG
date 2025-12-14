#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2922160515U;
short var_5 = (short)24245;
unsigned long long int var_8 = 13514020592180722011ULL;
int zero = 0;
unsigned int var_10 = 1214104148U;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)16150;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
