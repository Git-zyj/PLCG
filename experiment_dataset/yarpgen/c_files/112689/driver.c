#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)10401;
unsigned short var_4 = (unsigned short)24700;
short var_6 = (short)-16276;
short var_8 = (short)6412;
unsigned char var_10 = (unsigned char)157;
int zero = 0;
unsigned char var_11 = (unsigned char)226;
unsigned long long int var_12 = 3638817393191262282ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
