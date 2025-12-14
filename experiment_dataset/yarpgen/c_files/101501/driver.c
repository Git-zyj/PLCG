#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16437409648527670005ULL;
unsigned int var_1 = 3170916003U;
unsigned long long int var_2 = 11426126464689374900ULL;
unsigned long long int var_3 = 3470845722655893526ULL;
unsigned int var_15 = 554712224U;
int zero = 0;
signed char var_16 = (signed char)78;
signed char var_17 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
