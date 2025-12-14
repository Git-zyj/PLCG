#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6627;
long long int var_2 = 1858362330279303133LL;
signed char var_4 = (signed char)73;
long long int var_6 = -3356498497892078971LL;
long long int var_7 = 411105684995748184LL;
short var_11 = (short)-2606;
signed char var_13 = (signed char)86;
unsigned char var_14 = (unsigned char)201;
unsigned int var_16 = 2558462774U;
int zero = 0;
signed char var_18 = (signed char)-80;
signed char var_19 = (signed char)28;
long long int var_20 = 3941789422820251343LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
