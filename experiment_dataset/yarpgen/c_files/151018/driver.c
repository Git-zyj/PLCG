#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)97;
unsigned short var_4 = (unsigned short)24237;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)10089;
unsigned short var_12 = (unsigned short)6622;
short var_13 = (short)-14652;
unsigned long long int var_14 = 5503660832842429068ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
