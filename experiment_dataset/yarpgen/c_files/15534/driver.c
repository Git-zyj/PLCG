#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1768189421U;
unsigned long long int var_3 = 3940055402645914051ULL;
long long int var_11 = -9221340724990527728LL;
int zero = 0;
unsigned long long int var_16 = 4639274035069239715ULL;
int var_17 = -1576972283;
long long int var_18 = -5218538482099903966LL;
unsigned long long int var_19 = 13424719373046972188ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
