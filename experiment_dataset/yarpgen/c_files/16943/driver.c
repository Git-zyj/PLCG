#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)105;
unsigned char var_6 = (unsigned char)241;
short var_12 = (short)5601;
int zero = 0;
unsigned char var_14 = (unsigned char)14;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2481382275U;
unsigned char var_17 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
