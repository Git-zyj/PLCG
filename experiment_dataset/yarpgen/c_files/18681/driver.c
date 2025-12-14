#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)16421;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 831626607U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)253;
short var_17 = (short)-18616;
void init() {
}

void checksum() {
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
