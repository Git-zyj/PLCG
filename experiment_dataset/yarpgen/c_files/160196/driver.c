#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4114498750U;
unsigned int var_3 = 4073767366U;
unsigned int var_8 = 2501231558U;
unsigned int var_10 = 4243640829U;
int zero = 0;
unsigned int var_13 = 3399287672U;
unsigned int var_14 = 3080577033U;
unsigned int var_15 = 871942946U;
unsigned int var_16 = 2283627864U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
