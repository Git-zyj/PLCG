#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2178644691U;
unsigned long long int var_7 = 2835271827321744522ULL;
unsigned int var_11 = 1241013158U;
unsigned long long int var_16 = 18162909677757959237ULL;
int zero = 0;
unsigned long long int var_17 = 9842606093185354272ULL;
unsigned int var_18 = 455585430U;
unsigned long long int var_19 = 12696218149030004721ULL;
unsigned long long int var_20 = 5219535578113629387ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
