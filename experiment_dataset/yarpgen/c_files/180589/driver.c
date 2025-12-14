#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -736875878;
unsigned char var_3 = (unsigned char)251;
unsigned int var_4 = 1651521370U;
unsigned int var_5 = 876908356U;
unsigned int var_8 = 3722757387U;
int zero = 0;
unsigned char var_10 = (unsigned char)158;
long long int var_11 = -5496955395030909008LL;
unsigned long long int var_12 = 17907316553430522305ULL;
unsigned int var_13 = 702818724U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
