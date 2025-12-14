#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1658043320;
long long int var_5 = 3231269759043217299LL;
short var_6 = (short)19641;
signed char var_7 = (signed char)7;
int zero = 0;
unsigned char var_17 = (unsigned char)206;
short var_18 = (short)-17756;
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
