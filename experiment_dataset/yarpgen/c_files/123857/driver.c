#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20577;
unsigned int var_5 = 390631397U;
_Bool var_7 = (_Bool)0;
unsigned short var_13 = (unsigned short)14570;
int zero = 0;
unsigned int var_16 = 3340572362U;
unsigned char var_17 = (unsigned char)64;
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
