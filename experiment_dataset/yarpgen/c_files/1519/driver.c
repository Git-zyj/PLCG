#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1507979832221354830LL;
signed char var_3 = (signed char)109;
unsigned int var_4 = 1726279470U;
int zero = 0;
unsigned int var_12 = 833618811U;
long long int var_13 = -4503500284466926609LL;
long long int var_14 = -746434437364923118LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
