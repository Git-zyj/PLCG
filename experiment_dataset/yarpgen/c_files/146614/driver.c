#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
long long int var_5 = -4477574920017612240LL;
int var_8 = 1965552173;
unsigned char var_14 = (unsigned char)232;
int zero = 0;
unsigned char var_15 = (unsigned char)139;
unsigned char var_16 = (unsigned char)204;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
