#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1965246363;
unsigned long long int var_5 = 1376651136509807798ULL;
unsigned long long int var_11 = 4964599592717946548ULL;
int zero = 0;
int var_14 = 1197272667;
int var_15 = -929672135;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
