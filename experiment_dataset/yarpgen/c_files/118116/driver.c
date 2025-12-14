#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1329330143U;
signed char var_4 = (signed char)113;
short var_5 = (short)-17041;
signed char var_7 = (signed char)-47;
long long int var_14 = -1900701736772286593LL;
signed char var_16 = (signed char)124;
unsigned int var_17 = 330976464U;
int zero = 0;
int var_18 = 1821518131;
unsigned int var_19 = 2132596424U;
short var_20 = (short)11161;
void init() {
}

void checksum() {
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
