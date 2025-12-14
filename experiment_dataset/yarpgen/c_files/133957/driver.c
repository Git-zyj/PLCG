#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-36;
unsigned int var_4 = 397591277U;
unsigned short var_6 = (unsigned short)4291;
short var_7 = (short)19016;
int zero = 0;
unsigned int var_12 = 166581464U;
unsigned short var_13 = (unsigned short)45520;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
