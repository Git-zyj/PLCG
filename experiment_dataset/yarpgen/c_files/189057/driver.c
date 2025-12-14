#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)104;
short var_1 = (short)-29946;
unsigned int var_5 = 2845591433U;
unsigned char var_6 = (unsigned char)56;
short var_8 = (short)3864;
short var_9 = (short)-32344;
long long int var_12 = -411551167125473764LL;
short var_14 = (short)-5565;
int zero = 0;
long long int var_15 = -2040800757648157841LL;
unsigned char var_16 = (unsigned char)24;
short var_17 = (short)11875;
long long int var_18 = 3626741523394337903LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
