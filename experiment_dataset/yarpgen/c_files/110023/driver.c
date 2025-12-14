#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1230;
unsigned short var_4 = (unsigned short)13291;
unsigned short var_9 = (unsigned short)4669;
unsigned short var_12 = (unsigned short)56864;
unsigned short var_15 = (unsigned short)47520;
unsigned short var_16 = (unsigned short)48824;
unsigned short var_17 = (unsigned short)52878;
unsigned short var_19 = (unsigned short)32267;
int zero = 0;
unsigned short var_20 = (unsigned short)51483;
unsigned short var_21 = (unsigned short)64328;
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
