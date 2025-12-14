#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)108;
unsigned int var_9 = 2086871710U;
unsigned int var_12 = 893992001U;
short var_13 = (short)-24307;
int zero = 0;
unsigned int var_15 = 693850803U;
_Bool var_16 = (_Bool)1;
long long int var_17 = -1426890446844953511LL;
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
