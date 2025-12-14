#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)1898;
unsigned int var_9 = 2970290521U;
unsigned char var_10 = (unsigned char)12;
int var_14 = 1898360921;
int zero = 0;
short var_15 = (short)-26470;
unsigned char var_16 = (unsigned char)146;
unsigned int var_17 = 513453948U;
void init() {
}

void checksum() {
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
