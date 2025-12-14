#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1594003281;
unsigned char var_6 = (unsigned char)222;
short var_12 = (short)-30020;
int var_13 = -2122425626;
int zero = 0;
signed char var_17 = (signed char)-66;
unsigned char var_18 = (unsigned char)9;
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
