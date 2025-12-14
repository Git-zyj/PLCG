#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = -1793449093;
long long int var_6 = 3834142208542246606LL;
int zero = 0;
unsigned long long int var_13 = 7152161889184318420ULL;
unsigned long long int var_14 = 2948597536068568076ULL;
unsigned long long int var_15 = 5311173424347612450ULL;
unsigned long long int var_16 = 1207872900923572992ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
