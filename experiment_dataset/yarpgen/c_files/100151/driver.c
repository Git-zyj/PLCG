#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3661497776062495775ULL;
unsigned int var_6 = 1518508073U;
short var_7 = (short)-20236;
unsigned long long int var_8 = 15975553194867352813ULL;
unsigned long long int var_10 = 13637927896197109537ULL;
unsigned int var_12 = 3613241055U;
unsigned long long int var_13 = 6684004804270267267ULL;
unsigned long long int var_14 = 2237969774385247212ULL;
int zero = 0;
unsigned int var_16 = 261524240U;
unsigned int var_17 = 645531817U;
unsigned long long int var_18 = 10682872985311664392ULL;
void init() {
}

void checksum() {
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
