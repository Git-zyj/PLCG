#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)54;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)160;
unsigned short var_8 = (unsigned short)25055;
short var_10 = (short)30792;
int zero = 0;
unsigned char var_12 = (unsigned char)4;
unsigned char var_13 = (unsigned char)130;
unsigned char var_14 = (unsigned char)178;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
