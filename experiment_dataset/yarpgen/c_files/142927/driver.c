#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)100;
int var_6 = -898786702;
unsigned long long int var_10 = 7672359044909292350ULL;
int var_16 = 1680816696;
int zero = 0;
int var_18 = -1383238777;
unsigned long long int var_19 = 14483254969999660782ULL;
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
