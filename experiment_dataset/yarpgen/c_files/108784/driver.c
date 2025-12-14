#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7204399788580990863LL;
int var_2 = -2109936558;
unsigned int var_5 = 4277151299U;
short var_7 = (short)-6246;
int var_12 = 1678470306;
unsigned int var_14 = 824973612U;
int zero = 0;
int var_17 = 1894224302;
short var_18 = (short)-16476;
int var_19 = -1673660775;
unsigned short var_20 = (unsigned short)64151;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
