#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -640080858;
short var_1 = (short)-5922;
short var_5 = (short)-17990;
int var_6 = 1292947477;
long long int var_9 = -7865198543598345296LL;
short var_10 = (short)19498;
short var_12 = (short)13537;
int zero = 0;
int var_13 = 888039485;
unsigned char var_14 = (unsigned char)195;
short var_15 = (short)-17054;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
