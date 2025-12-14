#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28779;
unsigned int var_1 = 2307172646U;
unsigned int var_5 = 878090968U;
int var_6 = 1164452307;
short var_7 = (short)23566;
unsigned char var_8 = (unsigned char)36;
unsigned char var_12 = (unsigned char)14;
long long int var_15 = -571231993505768988LL;
int zero = 0;
unsigned short var_16 = (unsigned short)7374;
long long int var_17 = -245878073133320194LL;
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
