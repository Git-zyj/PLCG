#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1076909957;
unsigned int var_7 = 2094501467U;
unsigned short var_9 = (unsigned short)22847;
long long int var_10 = -5609185155456687197LL;
unsigned long long int var_15 = 3984448379979229415ULL;
unsigned int var_17 = 168891554U;
int zero = 0;
short var_19 = (short)-14000;
unsigned int var_20 = 4113519781U;
signed char var_21 = (signed char)126;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
