#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)58;
short var_3 = (short)29058;
unsigned char var_5 = (unsigned char)157;
int var_7 = 2025626685;
unsigned short var_9 = (unsigned short)52072;
int zero = 0;
short var_11 = (short)-22019;
short var_12 = (short)387;
short var_13 = (short)9229;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
