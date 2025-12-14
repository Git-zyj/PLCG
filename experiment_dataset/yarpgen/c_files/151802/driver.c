#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-20205;
unsigned int var_12 = 76461948U;
int zero = 0;
unsigned int var_17 = 4253560269U;
_Bool var_18 = (_Bool)1;
long long int var_19 = -5706224528726840284LL;
unsigned char var_20 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
