#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2865826724U;
unsigned int var_8 = 2678293624U;
short var_10 = (short)12498;
short var_12 = (short)16112;
int zero = 0;
unsigned int var_15 = 3121930184U;
short var_16 = (short)-31489;
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
