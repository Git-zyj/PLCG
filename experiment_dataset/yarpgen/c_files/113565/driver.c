#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1432102891U;
unsigned int var_4 = 3488509838U;
unsigned int var_15 = 3909997916U;
int zero = 0;
unsigned int var_17 = 2047960314U;
short var_18 = (short)5253;
unsigned int var_19 = 1763267694U;
unsigned int var_20 = 2200407367U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
