#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4522925737401739406LL;
long long int var_3 = -4290128218238795472LL;
unsigned int var_8 = 1838004833U;
unsigned short var_10 = (unsigned short)64889;
unsigned short var_12 = (unsigned short)17234;
long long int var_13 = -3127114323408468984LL;
int zero = 0;
unsigned int var_15 = 3056663798U;
unsigned int var_16 = 2532853640U;
unsigned short var_17 = (unsigned short)16604;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
