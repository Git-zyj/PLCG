#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19937;
unsigned short var_9 = (unsigned short)45422;
unsigned int var_10 = 1754906735U;
short var_11 = (short)3051;
int zero = 0;
short var_13 = (short)6713;
short var_14 = (short)13597;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
