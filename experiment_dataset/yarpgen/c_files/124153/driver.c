#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6385216612109804744LL;
unsigned long long int var_3 = 14622395613695567782ULL;
int zero = 0;
long long int var_11 = -8404048292609615341LL;
unsigned long long int var_12 = 13949908958659878383ULL;
void init() {
}

void checksum() {
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
