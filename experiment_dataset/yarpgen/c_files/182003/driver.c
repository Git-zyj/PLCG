#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16884;
short var_3 = (short)-8525;
unsigned short var_5 = (unsigned short)43843;
short var_9 = (short)-13040;
short var_10 = (short)28203;
short var_13 = (short)13777;
int zero = 0;
unsigned short var_14 = (unsigned short)58074;
short var_15 = (short)-14462;
void init() {
}

void checksum() {
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
