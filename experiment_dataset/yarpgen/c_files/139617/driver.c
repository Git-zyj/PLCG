#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)19;
unsigned short var_13 = (unsigned short)36480;
unsigned short var_14 = (unsigned short)64823;
int zero = 0;
unsigned char var_16 = (unsigned char)147;
short var_17 = (short)-25311;
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
