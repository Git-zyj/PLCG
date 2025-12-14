#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-31393;
unsigned char var_10 = (unsigned char)230;
unsigned long long int var_12 = 10241986651005624806ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)18828;
signed char var_16 = (signed char)77;
int var_17 = 1213553902;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
