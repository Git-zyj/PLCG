#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-4330;
unsigned char var_4 = (unsigned char)247;
unsigned int var_7 = 930116457U;
unsigned short var_9 = (unsigned short)62036;
int var_16 = -2046788558;
int zero = 0;
long long int var_17 = -5757656483660440429LL;
signed char var_18 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
