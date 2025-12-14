#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2061055083;
int var_3 = -275821373;
long long int var_6 = 2835094911402331726LL;
int var_7 = 1789574267;
int var_10 = 659710165;
int zero = 0;
long long int var_16 = 2574889001776044770LL;
int var_17 = -1224543301;
void init() {
}

void checksum() {
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
