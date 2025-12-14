#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)28;
unsigned long long int var_13 = 3906811294844527766ULL;
unsigned char var_15 = (unsigned char)255;
unsigned int var_17 = 1901010377U;
short var_18 = (short)18736;
int zero = 0;
short var_19 = (short)18519;
signed char var_20 = (signed char)74;
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
