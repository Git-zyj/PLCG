#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18378596156774877929ULL;
unsigned long long int var_1 = 3809037934766729688ULL;
unsigned long long int var_2 = 6372852876234683540ULL;
unsigned long long int var_4 = 3503307070870808214ULL;
unsigned long long int var_7 = 12173872631379407450ULL;
short var_8 = (short)-23758;
unsigned long long int var_9 = 1863371464990825310ULL;
unsigned long long int var_12 = 1126145109119255908ULL;
int zero = 0;
unsigned long long int var_14 = 8875814992986912430ULL;
long long int var_15 = -5810007058036244543LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
