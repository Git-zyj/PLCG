#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2592;
short var_5 = (short)10999;
unsigned char var_13 = (unsigned char)140;
int zero = 0;
unsigned long long int var_16 = 647057455751965919ULL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-22330;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
