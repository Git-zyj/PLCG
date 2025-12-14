#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_6 = (short)-20858;
short var_9 = (short)11321;
int var_12 = -1519074362;
int zero = 0;
signed char var_14 = (signed char)12;
unsigned int var_15 = 1564860200U;
unsigned int var_16 = 3422864878U;
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
