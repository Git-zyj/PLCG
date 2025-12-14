#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_6 = -8602443889437313995LL;
int var_11 = 754268329;
unsigned char var_12 = (unsigned char)184;
long long int var_16 = -7929149098844596777LL;
unsigned char var_17 = (unsigned char)87;
int zero = 0;
unsigned int var_18 = 815995453U;
int var_19 = -1700569916;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
