#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6339;
int var_1 = 520017948;
short var_6 = (short)30274;
long long int var_7 = -8187267427021571096LL;
unsigned short var_10 = (unsigned short)57235;
unsigned int var_12 = 4102066056U;
int zero = 0;
short var_17 = (short)17859;
short var_18 = (short)-9656;
signed char var_19 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
