#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1869151772;
_Bool var_5 = (_Bool)1;
unsigned int var_10 = 1985922633U;
short var_14 = (short)23878;
int zero = 0;
short var_15 = (short)-32359;
unsigned int var_16 = 2796968108U;
short var_17 = (short)-731;
unsigned long long int var_18 = 11940199962494701863ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
