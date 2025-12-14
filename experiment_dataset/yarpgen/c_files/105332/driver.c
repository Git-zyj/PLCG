#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)51;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int var_12 = -2037834799;
unsigned short var_17 = (unsigned short)54007;
unsigned int var_18 = 1572910029U;
int zero = 0;
short var_20 = (short)-11910;
unsigned short var_21 = (unsigned short)9687;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
