#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 443449070;
unsigned short var_4 = (unsigned short)57185;
unsigned char var_7 = (unsigned char)144;
int zero = 0;
short var_10 = (short)-3262;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)165;
unsigned char var_13 = (unsigned char)237;
unsigned char var_14 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
