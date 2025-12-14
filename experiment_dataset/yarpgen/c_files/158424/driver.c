#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-2485;
unsigned short var_7 = (unsigned short)19761;
unsigned int var_8 = 450387190U;
int zero = 0;
unsigned short var_13 = (unsigned short)40611;
unsigned short var_14 = (unsigned short)6132;
short var_15 = (short)4032;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
