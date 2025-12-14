#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9122;
unsigned short var_2 = (unsigned short)61565;
long long int var_6 = -2840595729699251815LL;
signed char var_12 = (signed char)78;
unsigned short var_13 = (unsigned short)58378;
long long int var_16 = -5412520872152711311LL;
unsigned short var_17 = (unsigned short)55478;
int zero = 0;
unsigned short var_19 = (unsigned short)9682;
signed char var_20 = (signed char)-73;
short var_21 = (short)11127;
unsigned short var_22 = (unsigned short)17028;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
