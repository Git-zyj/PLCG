#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)34954;
short var_7 = (short)-1001;
short var_12 = (short)-6928;
int zero = 0;
unsigned short var_14 = (unsigned short)25672;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)63008;
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
