#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3969381972932081007LL;
unsigned short var_1 = (unsigned short)18070;
unsigned int var_4 = 2087157127U;
short var_5 = (short)18584;
short var_12 = (short)4303;
int zero = 0;
unsigned long long int var_15 = 2749312787768886780ULL;
unsigned int var_16 = 3630615962U;
unsigned int var_17 = 3664505625U;
long long int var_18 = 2783980266698125444LL;
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
