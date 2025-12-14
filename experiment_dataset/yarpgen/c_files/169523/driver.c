#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)53;
int var_6 = -516033227;
unsigned char var_9 = (unsigned char)100;
int var_10 = -1887604973;
unsigned char var_11 = (unsigned char)32;
int zero = 0;
signed char var_12 = (signed char)21;
int var_13 = 1879665533;
signed char var_14 = (signed char)123;
unsigned int var_15 = 3185800885U;
signed char var_16 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
