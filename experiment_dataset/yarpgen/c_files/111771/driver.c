#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 128467733;
_Bool var_7 = (_Bool)0;
int var_8 = -2104735928;
int var_11 = -974560062;
int var_15 = 626539653;
int zero = 0;
int var_16 = -1340664455;
int var_17 = 565549198;
int var_18 = 1675149077;
int var_19 = 275632585;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
