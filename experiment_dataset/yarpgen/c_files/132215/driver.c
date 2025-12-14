#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)10771;
unsigned long long int var_6 = 18132865984176127014ULL;
short var_7 = (short)-20639;
signed char var_9 = (signed char)26;
int zero = 0;
signed char var_20 = (signed char)(-127 - 1);
signed char var_21 = (signed char)-64;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
