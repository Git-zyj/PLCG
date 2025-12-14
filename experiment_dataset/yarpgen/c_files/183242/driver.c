#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -314809073;
unsigned int var_1 = 1231859237U;
unsigned int var_2 = 1624293476U;
short var_4 = (short)-7363;
unsigned long long int var_10 = 9847208934450460456ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)4985;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
