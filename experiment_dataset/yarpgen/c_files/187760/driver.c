#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)2454;
unsigned short var_12 = (unsigned short)47641;
unsigned long long int var_14 = 7236077917269852727ULL;
int zero = 0;
unsigned int var_18 = 1837870971U;
int var_19 = 943668636;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
