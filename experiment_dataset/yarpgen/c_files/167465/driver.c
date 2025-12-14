#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1059824044;
int var_4 = 1090266653;
int var_5 = 1612729073;
long long int var_6 = -3259942091322358759LL;
long long int var_9 = -1187624616640236561LL;
long long int var_12 = 6006124447497367189LL;
long long int var_13 = -2393306577920012509LL;
int zero = 0;
long long int var_15 = -3333538369913096227LL;
long long int var_16 = -347558043144032572LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
