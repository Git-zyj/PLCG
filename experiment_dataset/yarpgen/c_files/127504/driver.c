#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -890901532;
long long int var_4 = 4431239045126680150LL;
signed char var_8 = (signed char)-92;
short var_11 = (short)-19422;
int zero = 0;
int var_12 = 1587766602;
short var_13 = (short)10017;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
