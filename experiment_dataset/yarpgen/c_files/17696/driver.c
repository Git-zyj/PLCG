#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1976965343;
signed char var_8 = (signed char)94;
unsigned int var_13 = 3656341542U;
int zero = 0;
unsigned short var_14 = (unsigned short)27381;
unsigned char var_15 = (unsigned char)236;
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
