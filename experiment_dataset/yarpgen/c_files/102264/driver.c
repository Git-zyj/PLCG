#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8689281364334239871ULL;
short var_8 = (short)-4882;
unsigned long long int var_11 = 14548643042914608304ULL;
unsigned long long int var_13 = 8102237021879988090ULL;
int zero = 0;
long long int var_16 = -7364390036201825267LL;
unsigned long long int var_17 = 1680526930907155297ULL;
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
