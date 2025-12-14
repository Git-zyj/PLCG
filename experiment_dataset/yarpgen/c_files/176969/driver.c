#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -495460468094430497LL;
short var_10 = (short)31330;
unsigned int var_16 = 1373314905U;
int zero = 0;
unsigned int var_17 = 1848784852U;
unsigned long long int var_18 = 12495837196683254087ULL;
unsigned int var_19 = 1514573695U;
void init() {
}

void checksum() {
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
