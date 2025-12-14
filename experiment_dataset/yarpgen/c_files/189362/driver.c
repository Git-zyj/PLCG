#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6232756233343548417LL;
unsigned long long int var_3 = 1122986876381601191ULL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned char var_15 = (unsigned char)92;
short var_16 = (short)-17580;
unsigned long long int var_17 = 17963012632839951648ULL;
int zero = 0;
unsigned int var_20 = 2088856632U;
short var_21 = (short)-16304;
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
