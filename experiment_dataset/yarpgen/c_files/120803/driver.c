#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9576;
unsigned short var_3 = (unsigned short)28907;
long long int var_5 = 1006162744782216233LL;
long long int var_6 = 7117689230177252210LL;
unsigned short var_7 = (unsigned short)36807;
unsigned short var_13 = (unsigned short)35413;
short var_14 = (short)-7033;
short var_15 = (short)12259;
signed char var_18 = (signed char)27;
int zero = 0;
unsigned short var_19 = (unsigned short)49210;
short var_20 = (short)23023;
void init() {
}

void checksum() {
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
