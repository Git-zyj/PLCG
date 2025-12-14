#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2896420587U;
unsigned short var_3 = (unsigned short)4431;
signed char var_4 = (signed char)-81;
int var_7 = 1317544751;
int var_9 = 2027855837;
int zero = 0;
short var_13 = (short)-13080;
unsigned int var_14 = 3081845792U;
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
