#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -944484280;
unsigned int var_5 = 1475180099U;
unsigned char var_13 = (unsigned char)247;
unsigned int var_15 = 2655065136U;
int zero = 0;
unsigned char var_19 = (unsigned char)193;
unsigned short var_20 = (unsigned short)30310;
signed char var_21 = (signed char)-99;
short var_22 = (short)15920;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
