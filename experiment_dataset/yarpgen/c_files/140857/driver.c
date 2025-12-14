#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13681183575095595194ULL;
unsigned short var_3 = (unsigned short)38552;
unsigned long long int var_12 = 5366248661912162516ULL;
int zero = 0;
signed char var_14 = (signed char)-97;
unsigned long long int var_15 = 12267307302293163225ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
