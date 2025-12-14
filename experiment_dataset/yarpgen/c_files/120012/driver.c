#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1926301108;
signed char var_5 = (signed char)-126;
unsigned long long int var_6 = 15146490634387141007ULL;
int var_9 = -1710641982;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-116;
int zero = 0;
signed char var_15 = (signed char)11;
short var_16 = (short)-10335;
unsigned short var_17 = (unsigned short)12658;
short var_18 = (short)-7874;
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
