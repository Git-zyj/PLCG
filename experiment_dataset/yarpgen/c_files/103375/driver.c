#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3698362018U;
unsigned long long int var_7 = 12225205151133170870ULL;
short var_12 = (short)24894;
unsigned short var_15 = (unsigned short)42991;
int zero = 0;
signed char var_19 = (signed char)-99;
unsigned int var_20 = 198007531U;
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
