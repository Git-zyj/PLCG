#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1695;
unsigned char var_4 = (unsigned char)59;
unsigned char var_11 = (unsigned char)188;
unsigned char var_14 = (unsigned char)73;
int zero = 0;
unsigned char var_15 = (unsigned char)69;
unsigned char var_16 = (unsigned char)23;
_Bool var_17 = (_Bool)1;
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
