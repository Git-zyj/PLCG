#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)104;
unsigned char var_6 = (unsigned char)207;
unsigned long long int var_7 = 4366281417501254906ULL;
unsigned int var_9 = 837371312U;
short var_10 = (short)6660;
int zero = 0;
unsigned long long int var_12 = 13278850950000146670ULL;
int var_13 = 1190180849;
unsigned long long int var_14 = 14070765802417326814ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
