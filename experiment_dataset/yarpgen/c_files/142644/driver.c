#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-81;
unsigned int var_8 = 1623537581U;
unsigned long long int var_14 = 10773011787454567617ULL;
int zero = 0;
long long int var_17 = -8041094893440593655LL;
long long int var_18 = 4811282466962710003LL;
signed char var_19 = (signed char)45;
void init() {
}

void checksum() {
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
