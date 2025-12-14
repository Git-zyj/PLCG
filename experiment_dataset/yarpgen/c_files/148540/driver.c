#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)25477;
short var_12 = (short)-5586;
int zero = 0;
signed char var_14 = (signed char)-40;
signed char var_15 = (signed char)-45;
long long int var_16 = 641803770651909626LL;
unsigned short var_17 = (unsigned short)2873;
int var_18 = -56068279;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
