#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)63212;
unsigned short var_5 = (unsigned short)35570;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)35;
int zero = 0;
short var_15 = (short)26810;
signed char var_16 = (signed char)29;
signed char var_17 = (signed char)-95;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
