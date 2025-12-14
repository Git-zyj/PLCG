#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
signed char var_5 = (signed char)67;
short var_7 = (short)-22195;
unsigned int var_12 = 287474177U;
int var_16 = -1676237882;
int zero = 0;
unsigned short var_18 = (unsigned short)59214;
unsigned long long int var_19 = 8486013026120758918ULL;
short var_20 = (short)-7863;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
