#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
long long int var_6 = -336278304800013535LL;
short var_8 = (short)-16917;
int var_9 = -104490981;
short var_12 = (short)31328;
unsigned int var_17 = 1751140806U;
int zero = 0;
int var_19 = -520417716;
unsigned short var_20 = (unsigned short)62479;
unsigned char var_21 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
