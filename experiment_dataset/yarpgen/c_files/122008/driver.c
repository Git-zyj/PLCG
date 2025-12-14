#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5639225471704264681ULL;
short var_10 = (short)1868;
signed char var_11 = (signed char)2;
short var_12 = (short)-16653;
int var_13 = -1857833678;
int zero = 0;
short var_15 = (short)-20492;
int var_16 = 865758663;
int var_17 = 477328831;
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
