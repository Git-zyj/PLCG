#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)99;
unsigned int var_4 = 2669316001U;
short var_12 = (short)-13076;
unsigned short var_14 = (unsigned short)14381;
int zero = 0;
unsigned short var_15 = (unsigned short)4692;
unsigned short var_16 = (unsigned short)10422;
void init() {
}

void checksum() {
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
