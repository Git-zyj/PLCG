#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)7;
unsigned short var_3 = (unsigned short)59069;
int var_7 = -1754798974;
int zero = 0;
unsigned short var_12 = (unsigned short)23500;
int var_13 = -2569228;
short var_14 = (short)20977;
unsigned short var_15 = (unsigned short)37512;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
