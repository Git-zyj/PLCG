#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = -386060320;
int var_13 = -1221992898;
int var_14 = -871562112;
int var_18 = 1966166438;
int var_19 = 215873065;
int zero = 0;
int var_20 = 912703961;
signed char var_21 = (signed char)-78;
signed char var_22 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
