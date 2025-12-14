#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)44;
unsigned short var_6 = (unsigned short)55827;
unsigned short var_8 = (unsigned short)45045;
unsigned short var_9 = (unsigned short)24301;
int zero = 0;
long long int var_10 = -3307890599583686312LL;
short var_11 = (short)-32694;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
