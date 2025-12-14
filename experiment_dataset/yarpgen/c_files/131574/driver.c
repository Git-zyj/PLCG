#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -109392188;
int var_5 = -2085049669;
signed char var_7 = (signed char)-68;
short var_14 = (short)2131;
int zero = 0;
int var_16 = 1205007759;
int var_17 = -1385593324;
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
