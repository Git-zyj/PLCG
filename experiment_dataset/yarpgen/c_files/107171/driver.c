#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1439033775;
long long int var_8 = 7816950509736808260LL;
long long int var_10 = -6387491023653693699LL;
short var_11 = (short)14414;
int zero = 0;
long long int var_12 = 3767995226904314586LL;
unsigned char var_13 = (unsigned char)144;
unsigned int var_14 = 2130434363U;
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
