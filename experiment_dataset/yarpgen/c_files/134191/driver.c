#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 5702615647617340546LL;
unsigned long long int var_10 = 5556462844438767325ULL;
int zero = 0;
long long int var_16 = -3167332810680333298LL;
unsigned int var_17 = 3973353994U;
long long int var_18 = 2169094219641310629LL;
int var_19 = 680205873;
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
