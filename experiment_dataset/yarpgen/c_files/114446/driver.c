#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_4 = (short)22954;
unsigned int var_5 = 264742883U;
unsigned short var_8 = (unsigned short)22250;
unsigned int var_11 = 2765577320U;
short var_13 = (short)11573;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)10702;
void init() {
}

void checksum() {
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
