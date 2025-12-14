#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3793062162U;
unsigned int var_2 = 1273308779U;
unsigned int var_4 = 3244536463U;
unsigned short var_8 = (unsigned short)62520;
int zero = 0;
unsigned char var_12 = (unsigned char)12;
unsigned char var_13 = (unsigned char)116;
short var_14 = (short)-23856;
unsigned int var_15 = 3869143461U;
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
