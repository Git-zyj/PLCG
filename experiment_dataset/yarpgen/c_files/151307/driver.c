#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)213;
unsigned char var_11 = (unsigned char)124;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)47116;
int zero = 0;
unsigned int var_18 = 5316215U;
unsigned short var_19 = (unsigned short)51059;
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
