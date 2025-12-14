#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)51;
unsigned short var_8 = (unsigned short)59346;
signed char var_10 = (signed char)6;
signed char var_13 = (signed char)69;
int zero = 0;
unsigned short var_14 = (unsigned short)28385;
short var_15 = (short)-23331;
unsigned long long int var_16 = 9214779470904161216ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
