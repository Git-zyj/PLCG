#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)149;
int var_13 = 1488912156;
int var_14 = -441288541;
int zero = 0;
signed char var_15 = (signed char)83;
long long int var_16 = -3252622393617006855LL;
long long int var_17 = -8433911707836951382LL;
unsigned char var_18 = (unsigned char)114;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
