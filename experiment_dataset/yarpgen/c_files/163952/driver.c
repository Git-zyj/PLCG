#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -95032242;
unsigned short var_6 = (unsigned short)30248;
unsigned char var_11 = (unsigned char)199;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-25564;
int zero = 0;
unsigned short var_17 = (unsigned short)55438;
unsigned char var_18 = (unsigned char)235;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
