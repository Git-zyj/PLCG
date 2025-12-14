#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14690711053185441609ULL;
unsigned int var_4 = 955715163U;
unsigned long long int var_6 = 14673734309084675465ULL;
short var_9 = (short)29129;
unsigned short var_11 = (unsigned short)55262;
short var_12 = (short)-13594;
int zero = 0;
unsigned int var_15 = 828374665U;
unsigned long long int var_16 = 13541571889099752486ULL;
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
