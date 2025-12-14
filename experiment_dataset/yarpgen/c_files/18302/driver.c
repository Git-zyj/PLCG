#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)16129;
unsigned int var_6 = 3641439118U;
unsigned int var_7 = 1850859552U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 3476932809U;
unsigned long long int var_13 = 16168410386439186103ULL;
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
