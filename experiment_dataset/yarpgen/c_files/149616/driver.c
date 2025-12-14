#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3610275635U;
signed char var_9 = (signed char)23;
short var_11 = (short)29870;
unsigned int var_12 = 3379882791U;
unsigned long long int var_14 = 8010727086388589155ULL;
int zero = 0;
long long int var_15 = 4171101430845553101LL;
unsigned short var_16 = (unsigned short)36707;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
