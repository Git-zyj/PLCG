#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)88;
unsigned int var_5 = 2556987803U;
unsigned char var_8 = (unsigned char)134;
int var_9 = -1312991109;
long long int var_10 = -8293922604765704342LL;
unsigned char var_14 = (unsigned char)24;
short var_16 = (short)-28194;
int zero = 0;
unsigned short var_19 = (unsigned short)22186;
unsigned int var_20 = 2700693086U;
unsigned long long int var_21 = 18094489546626472122ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
