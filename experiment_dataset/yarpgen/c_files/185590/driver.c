#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57344;
unsigned short var_4 = (unsigned short)6125;
unsigned int var_5 = 2266423647U;
int var_8 = -998359885;
int zero = 0;
short var_11 = (short)-7440;
int var_12 = -540566834;
unsigned long long int var_13 = 516713401515877376ULL;
unsigned short var_14 = (unsigned short)50082;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
