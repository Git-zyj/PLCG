#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4906;
unsigned char var_4 = (unsigned char)20;
unsigned short var_5 = (unsigned short)23921;
int var_6 = 358001353;
int var_7 = -2139409813;
long long int var_11 = 2625354156913215090LL;
int zero = 0;
unsigned int var_13 = 3762110238U;
unsigned short var_14 = (unsigned short)51229;
signed char var_15 = (signed char)85;
unsigned char var_16 = (unsigned char)157;
unsigned char var_17 = (unsigned char)29;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
