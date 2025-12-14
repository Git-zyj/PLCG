#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2933478954U;
unsigned int var_4 = 2985343658U;
signed char var_7 = (signed char)-14;
unsigned char var_10 = (unsigned char)189;
short var_18 = (short)-17160;
int zero = 0;
short var_20 = (short)22220;
short var_21 = (short)-13258;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
