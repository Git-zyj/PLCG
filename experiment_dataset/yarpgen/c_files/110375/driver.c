#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
short var_8 = (short)-23017;
unsigned long long int var_9 = 16476220836975852181ULL;
int zero = 0;
unsigned int var_11 = 149234944U;
unsigned short var_12 = (unsigned short)43683;
unsigned short var_13 = (unsigned short)48831;
unsigned short var_14 = (unsigned short)45063;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
