#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)63180;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)29593;
int zero = 0;
unsigned char var_10 = (unsigned char)253;
unsigned int var_11 = 3200465501U;
short var_12 = (short)-31204;
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
