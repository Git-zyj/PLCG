#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41818;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 16607060339472074597ULL;
signed char var_17 = (signed char)-61;
int var_18 = -132213666;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
