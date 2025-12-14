#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)24;
short var_6 = (short)-7918;
short var_9 = (short)18403;
unsigned long long int var_10 = 2421371978599216746ULL;
unsigned short var_12 = (unsigned short)16734;
int zero = 0;
unsigned char var_14 = (unsigned char)216;
unsigned int var_15 = 103337728U;
unsigned char var_16 = (unsigned char)53;
int var_17 = 1092122040;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
