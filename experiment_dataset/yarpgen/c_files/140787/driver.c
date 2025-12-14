#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13901;
int var_5 = 730128108;
short var_7 = (short)7417;
int zero = 0;
unsigned int var_12 = 1019319461U;
unsigned long long int var_13 = 17133726974388264668ULL;
short var_14 = (short)6726;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
