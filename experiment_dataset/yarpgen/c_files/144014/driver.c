#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)37;
unsigned char var_4 = (unsigned char)165;
int var_18 = -511978354;
long long int var_19 = -6793572947951939111LL;
int zero = 0;
unsigned int var_20 = 847110675U;
unsigned short var_21 = (unsigned short)21139;
void init() {
}

void checksum() {
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
