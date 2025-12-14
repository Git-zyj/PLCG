#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13132426320200211902ULL;
short var_1 = (short)-14621;
unsigned short var_4 = (unsigned short)47085;
unsigned long long int var_6 = 1522228360627188971ULL;
unsigned int var_7 = 568595684U;
unsigned long long int var_12 = 4937853015617695805ULL;
unsigned short var_14 = (unsigned short)46260;
int zero = 0;
signed char var_15 = (signed char)124;
signed char var_16 = (signed char)34;
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
