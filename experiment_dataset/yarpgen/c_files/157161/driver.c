#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 17402994214503838528ULL;
unsigned long long int var_8 = 17543520386240477489ULL;
int var_10 = -2015743712;
int zero = 0;
unsigned short var_14 = (unsigned short)49434;
unsigned int var_15 = 2027367272U;
unsigned long long int var_16 = 12381187853816964838ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
