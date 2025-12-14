#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3207681583U;
long long int var_2 = 8147194465365896082LL;
unsigned long long int var_3 = 11529438581185951238ULL;
int zero = 0;
unsigned long long int var_13 = 2500094093757699097ULL;
int var_14 = 1349227760;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
