#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_5 = 6261762862471939039LL;
unsigned long long int var_10 = 940454077313927161ULL;
unsigned char var_14 = (unsigned char)247;
int zero = 0;
unsigned long long int var_17 = 11832497855521074440ULL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 114284751U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
