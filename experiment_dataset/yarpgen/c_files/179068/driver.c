#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14996;
long long int var_1 = 4491458340163273190LL;
unsigned char var_3 = (unsigned char)125;
short var_13 = (short)-32065;
short var_15 = (short)362;
unsigned char var_16 = (unsigned char)45;
int zero = 0;
short var_19 = (short)-19994;
short var_20 = (short)-7785;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
