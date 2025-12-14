#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3416695975377959411ULL;
long long int var_10 = -8068319145252179416LL;
unsigned long long int var_14 = 4240051835195900772ULL;
int zero = 0;
int var_19 = 1092101596;
unsigned int var_20 = 817033933U;
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
