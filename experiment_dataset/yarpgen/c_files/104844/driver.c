#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 796593530U;
unsigned int var_13 = 1602280971U;
signed char var_15 = (signed char)-119;
signed char var_17 = (signed char)29;
int zero = 0;
int var_18 = -1969711920;
unsigned short var_19 = (unsigned short)16567;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
