#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -344213766;
unsigned int var_9 = 1467093718U;
unsigned char var_11 = (unsigned char)125;
unsigned char var_13 = (unsigned char)234;
unsigned char var_16 = (unsigned char)178;
int zero = 0;
unsigned int var_20 = 246971463U;
unsigned long long int var_21 = 1120247315826025290ULL;
unsigned char var_22 = (unsigned char)151;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
