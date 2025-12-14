#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 565172892U;
unsigned long long int var_4 = 17150433453555075936ULL;
signed char var_6 = (signed char)30;
int var_15 = 804899576;
int zero = 0;
signed char var_18 = (signed char)-87;
short var_19 = (short)-1305;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
