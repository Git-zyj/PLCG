#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1316386198;
signed char var_2 = (signed char)-17;
unsigned long long int var_6 = 14822768111747874517ULL;
short var_10 = (short)29942;
int var_11 = -769794200;
int zero = 0;
short var_12 = (short)-14220;
signed char var_13 = (signed char)-75;
unsigned long long int var_14 = 7209739524084559783ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
