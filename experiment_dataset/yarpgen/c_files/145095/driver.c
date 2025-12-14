#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)9;
unsigned int var_11 = 1738407282U;
int zero = 0;
unsigned long long int var_20 = 4196190322448108493ULL;
int var_21 = -1229569081;
unsigned char var_22 = (unsigned char)91;
unsigned int var_23 = 3399737224U;
unsigned int var_24 = 3016686300U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
