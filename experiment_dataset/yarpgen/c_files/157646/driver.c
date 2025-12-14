#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_13 = 3121692563233169045ULL;
unsigned long long int var_15 = 15505362585047602085ULL;
int zero = 0;
signed char var_19 = (signed char)-78;
unsigned short var_20 = (unsigned short)65119;
unsigned int var_21 = 1449195506U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
