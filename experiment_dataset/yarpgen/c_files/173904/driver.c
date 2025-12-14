#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7517;
long long int var_6 = -5317427069959378627LL;
short var_7 = (short)14624;
signed char var_15 = (signed char)-8;
int zero = 0;
short var_16 = (short)-20368;
unsigned char var_17 = (unsigned char)239;
unsigned char var_18 = (unsigned char)201;
unsigned short var_19 = (unsigned short)36418;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
