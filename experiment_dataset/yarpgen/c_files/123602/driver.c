#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-114;
unsigned char var_2 = (unsigned char)179;
unsigned int var_8 = 3331651531U;
short var_14 = (short)32350;
int zero = 0;
int var_15 = 719575722;
long long int var_16 = 2707722206565283407LL;
short var_17 = (short)28721;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
