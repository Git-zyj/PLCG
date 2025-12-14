#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_7 = (short)10507;
short var_9 = (short)22664;
unsigned short var_11 = (unsigned short)38323;
int zero = 0;
signed char var_14 = (signed char)77;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)29310;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
