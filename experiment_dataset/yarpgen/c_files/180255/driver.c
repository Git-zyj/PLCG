#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13568;
unsigned int var_8 = 48736673U;
short var_9 = (short)-24061;
unsigned int var_10 = 2468776909U;
int zero = 0;
short var_12 = (short)-28915;
unsigned int var_13 = 1419254426U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
