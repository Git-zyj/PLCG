#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58032;
int var_7 = 910143562;
short var_8 = (short)3758;
unsigned int var_9 = 3072918018U;
int zero = 0;
short var_19 = (short)9054;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)24292;
signed char var_22 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
