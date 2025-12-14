#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3104144605U;
long long int var_5 = 1668283392410901010LL;
unsigned int var_14 = 1200781596U;
int zero = 0;
signed char var_15 = (signed char)96;
unsigned long long int var_16 = 8710483665915182024ULL;
long long int var_17 = 2761695177995066875LL;
long long int var_18 = -5468129709933202390LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
