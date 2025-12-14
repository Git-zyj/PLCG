#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)175;
unsigned long long int var_9 = 11083238715656428246ULL;
unsigned long long int var_10 = 17927940634659920954ULL;
int var_13 = 1827711732;
int var_15 = -866327546;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)47629;
int zero = 0;
int var_19 = 438273731;
unsigned long long int var_20 = 5538955949345357305ULL;
void init() {
}

void checksum() {
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
