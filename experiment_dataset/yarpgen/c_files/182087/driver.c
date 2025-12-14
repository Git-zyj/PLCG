#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19495;
signed char var_10 = (signed char)40;
unsigned char var_11 = (unsigned char)27;
int var_12 = 1495462177;
unsigned short var_16 = (unsigned short)46997;
int zero = 0;
short var_17 = (short)-3935;
int var_18 = 2050939058;
unsigned int var_19 = 3646617300U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
