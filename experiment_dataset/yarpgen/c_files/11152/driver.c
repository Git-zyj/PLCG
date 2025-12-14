#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-96;
unsigned int var_2 = 2223263698U;
unsigned int var_5 = 544117199U;
int var_9 = 1610508299;
int zero = 0;
unsigned char var_10 = (unsigned char)234;
short var_11 = (short)-6325;
short var_12 = (short)12090;
unsigned int var_13 = 1281927002U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
