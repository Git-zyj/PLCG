#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37808;
unsigned char var_5 = (unsigned char)223;
unsigned int var_8 = 331094695U;
int zero = 0;
unsigned long long int var_10 = 17217082833011264286ULL;
short var_11 = (short)-14413;
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
