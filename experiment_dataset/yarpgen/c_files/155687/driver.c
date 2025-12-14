#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24666;
short var_3 = (short)-13421;
signed char var_6 = (signed char)-12;
unsigned char var_7 = (unsigned char)247;
unsigned short var_8 = (unsigned short)39142;
short var_9 = (short)-18683;
short var_10 = (short)-7172;
short var_16 = (short)14404;
int zero = 0;
unsigned short var_17 = (unsigned short)679;
short var_18 = (short)13909;
void init() {
}

void checksum() {
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
