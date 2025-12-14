#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6244;
short var_2 = (short)-18930;
signed char var_7 = (signed char)15;
unsigned long long int var_15 = 14652845187388638455ULL;
unsigned char var_18 = (unsigned char)180;
int zero = 0;
unsigned int var_19 = 2139211364U;
unsigned char var_20 = (unsigned char)239;
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
