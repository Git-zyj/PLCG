#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2363782420U;
int var_3 = 843910920;
long long int var_4 = 1795858942175611329LL;
long long int var_5 = 6217886146527705861LL;
short var_7 = (short)19652;
unsigned int var_8 = 2932694530U;
short var_9 = (short)-19503;
unsigned short var_12 = (unsigned short)33538;
int var_13 = 545258036;
int zero = 0;
long long int var_14 = -4674435307331853644LL;
unsigned short var_15 = (unsigned short)42695;
signed char var_16 = (signed char)-26;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
