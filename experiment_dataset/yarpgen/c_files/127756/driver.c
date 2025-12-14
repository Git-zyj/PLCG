#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-1;
short var_3 = (short)-4025;
signed char var_7 = (signed char)-123;
short var_8 = (short)-23029;
short var_12 = (short)120;
int var_14 = 2087701865;
short var_15 = (short)-12607;
int zero = 0;
short var_16 = (short)-21925;
unsigned int var_17 = 4244734431U;
unsigned int var_18 = 1899756334U;
unsigned long long int var_19 = 10553141462973167915ULL;
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
