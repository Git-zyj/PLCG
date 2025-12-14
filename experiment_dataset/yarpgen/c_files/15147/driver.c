#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15874;
unsigned int var_6 = 3945651513U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 4033249504U;
unsigned int var_12 = 320859898U;
unsigned int var_13 = 2049368682U;
void init() {
}

void checksum() {
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
