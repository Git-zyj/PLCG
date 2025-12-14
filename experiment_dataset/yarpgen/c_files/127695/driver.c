#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14883403596967505289ULL;
signed char var_1 = (signed char)112;
signed char var_8 = (signed char)1;
int var_12 = -995209802;
int zero = 0;
int var_13 = 414455453;
unsigned int var_14 = 2685986827U;
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
