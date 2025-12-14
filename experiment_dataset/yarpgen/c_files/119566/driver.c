#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
short var_3 = (short)22833;
unsigned short var_4 = (unsigned short)48536;
unsigned short var_8 = (unsigned short)7466;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 4019077867U;
unsigned short var_14 = (unsigned short)49569;
short var_15 = (short)24235;
int var_16 = -1818935525;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
