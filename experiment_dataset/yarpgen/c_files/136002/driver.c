#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6140;
unsigned long long int var_4 = 14472505563095025806ULL;
int var_6 = 900615143;
int var_7 = 1922039125;
int zero = 0;
signed char var_10 = (signed char)-22;
short var_11 = (short)2670;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
