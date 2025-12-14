#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1554037663703715553ULL;
unsigned int var_1 = 2295639255U;
long long int var_7 = 4439100466195693567LL;
int zero = 0;
unsigned long long int var_10 = 6632539979431795312ULL;
unsigned long long int var_11 = 8409127239991199222ULL;
unsigned int var_12 = 2873469101U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
