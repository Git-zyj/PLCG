#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3670876718257458165LL;
long long int var_3 = 2274078120837289132LL;
int var_4 = -1673845520;
short var_7 = (short)-29639;
long long int var_8 = 2191013900055895138LL;
int zero = 0;
unsigned char var_10 = (unsigned char)139;
unsigned int var_11 = 3300352156U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
