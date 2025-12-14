#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57933;
short var_8 = (short)-4362;
short var_10 = (short)-17587;
int zero = 0;
unsigned int var_13 = 1332297983U;
short var_14 = (short)-15772;
unsigned char var_15 = (unsigned char)219;
unsigned char var_16 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
