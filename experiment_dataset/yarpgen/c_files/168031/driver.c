#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 861101431U;
int var_1 = -1589610313;
int var_2 = 57863437;
int var_4 = 1054407061;
unsigned short var_8 = (unsigned short)11708;
unsigned int var_9 = 1127521534U;
unsigned int var_11 = 1168808494U;
int zero = 0;
unsigned short var_12 = (unsigned short)43378;
unsigned char var_13 = (unsigned char)73;
short var_14 = (short)17014;
void init() {
}

void checksum() {
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
