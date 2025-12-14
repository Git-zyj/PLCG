#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)21750;
short var_8 = (short)-5727;
int var_13 = 1777594082;
unsigned int var_17 = 714085957U;
int zero = 0;
unsigned int var_20 = 3577247572U;
signed char var_21 = (signed char)(-127 - 1);
int var_22 = -1864004058;
unsigned int var_23 = 332376320U;
unsigned short var_24 = (unsigned short)14953;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
