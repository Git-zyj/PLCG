#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_6 = (short)2881;
short var_7 = (short)27820;
signed char var_8 = (signed char)127;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)54563;
int zero = 0;
signed char var_17 = (signed char)90;
short var_18 = (short)-19804;
_Bool var_19 = (_Bool)1;
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
