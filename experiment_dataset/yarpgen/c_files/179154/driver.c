#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)50;
_Bool var_7 = (_Bool)1;
short var_8 = (short)2921;
unsigned char var_17 = (unsigned char)36;
int zero = 0;
unsigned char var_20 = (unsigned char)248;
short var_21 = (short)-8021;
unsigned short var_22 = (unsigned short)28443;
unsigned short var_23 = (unsigned short)34064;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
