#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2982786227U;
signed char var_11 = (signed char)-91;
int var_12 = 1932776265;
int var_14 = 1278165244;
unsigned char var_18 = (unsigned char)176;
int zero = 0;
unsigned int var_19 = 2471960425U;
signed char var_20 = (signed char)13;
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
