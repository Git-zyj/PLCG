#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17873;
unsigned int var_7 = 2235820619U;
unsigned short var_8 = (unsigned short)38612;
unsigned short var_11 = (unsigned short)32575;
int zero = 0;
unsigned short var_14 = (unsigned short)65330;
unsigned short var_15 = (unsigned short)9734;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)61980;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
