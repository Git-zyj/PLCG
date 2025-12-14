#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
signed char var_2 = (signed char)18;
int var_3 = 565654240;
short var_7 = (short)-1929;
unsigned short var_8 = (unsigned short)14344;
short var_9 = (short)17098;
int zero = 0;
unsigned short var_13 = (unsigned short)49113;
signed char var_14 = (signed char)79;
unsigned char var_15 = (unsigned char)115;
void init() {
}

void checksum() {
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
