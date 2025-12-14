#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23520;
unsigned long long int var_2 = 9202434374383065842ULL;
unsigned int var_6 = 1041312328U;
int zero = 0;
short var_14 = (short)32231;
unsigned short var_15 = (unsigned short)11847;
long long int var_16 = 1775898598263192958LL;
unsigned long long int var_17 = 3793411970498351748ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
