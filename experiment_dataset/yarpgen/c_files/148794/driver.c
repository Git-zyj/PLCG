#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1731388730U;
unsigned short var_6 = (unsigned short)55143;
long long int var_7 = 88215728921814575LL;
short var_8 = (short)-8151;
long long int var_12 = 1849957925361115249LL;
int zero = 0;
unsigned int var_14 = 535994171U;
short var_15 = (short)-31301;
long long int var_16 = -4338377620967886444LL;
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
