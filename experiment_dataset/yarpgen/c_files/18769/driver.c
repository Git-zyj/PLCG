#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)249;
short var_5 = (short)-1830;
long long int var_6 = -5958963972416584785LL;
short var_9 = (short)4651;
int zero = 0;
short var_10 = (short)-28812;
int var_11 = 1981499301;
short var_12 = (short)30773;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
