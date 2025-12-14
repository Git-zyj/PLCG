#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1928032460;
int var_2 = -1060319482;
signed char var_3 = (signed char)26;
signed char var_5 = (signed char)79;
unsigned long long int var_6 = 5109263779984773085ULL;
int zero = 0;
int var_11 = 501846901;
int var_12 = 1908721330;
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
