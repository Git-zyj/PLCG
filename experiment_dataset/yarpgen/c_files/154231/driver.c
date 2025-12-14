#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)255;
unsigned int var_13 = 1060464578U;
short var_14 = (short)-14542;
int zero = 0;
short var_16 = (short)-18879;
short var_17 = (short)10367;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)849;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
