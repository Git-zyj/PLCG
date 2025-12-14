#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2739214896840347872LL;
short var_5 = (short)1473;
short var_9 = (short)987;
long long int var_12 = -825988724062857133LL;
long long int var_13 = 8825326089757863621LL;
int zero = 0;
short var_16 = (short)-17799;
long long int var_17 = -2675869804799632870LL;
void init() {
}

void checksum() {
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
