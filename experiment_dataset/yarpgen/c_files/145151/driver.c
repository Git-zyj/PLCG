#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29230;
unsigned int var_4 = 1775330426U;
signed char var_5 = (signed char)14;
unsigned char var_9 = (unsigned char)37;
int zero = 0;
unsigned int var_14 = 2233807047U;
unsigned int var_15 = 4236933631U;
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
