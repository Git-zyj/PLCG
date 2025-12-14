#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5136523120850198901ULL;
unsigned short var_3 = (unsigned short)13653;
signed char var_5 = (signed char)54;
int zero = 0;
long long int var_10 = -2191681414235823214LL;
unsigned char var_11 = (unsigned char)131;
unsigned int var_12 = 2110670346U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
