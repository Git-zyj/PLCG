#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3286230699U;
signed char var_5 = (signed char)53;
short var_11 = (short)-12399;
unsigned int var_12 = 3859600243U;
int zero = 0;
unsigned long long int var_15 = 18159335721497570435ULL;
unsigned int var_16 = 2705109575U;
unsigned int var_17 = 3529722142U;
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
