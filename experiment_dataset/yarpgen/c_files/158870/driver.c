#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1480861158;
unsigned short var_3 = (unsigned short)53094;
unsigned short var_4 = (unsigned short)56837;
unsigned short var_8 = (unsigned short)9351;
unsigned short var_10 = (unsigned short)18712;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1498275415U;
unsigned short var_13 = (unsigned short)65190;
unsigned int var_14 = 2953927650U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
