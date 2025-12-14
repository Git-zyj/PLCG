#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22064;
signed char var_4 = (signed char)46;
unsigned long long int var_11 = 5698874612367712670ULL;
signed char var_13 = (signed char)-126;
signed char var_14 = (signed char)-81;
signed char var_15 = (signed char)-80;
int zero = 0;
unsigned long long int var_16 = 14980021501945553665ULL;
unsigned long long int var_17 = 782722384444599205ULL;
int var_18 = 329857519;
void init() {
}

void checksum() {
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
