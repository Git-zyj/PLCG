#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3397868186523019707ULL;
unsigned int var_1 = 1382103430U;
unsigned int var_5 = 3141229816U;
unsigned long long int var_6 = 6485271446281222209ULL;
unsigned int var_18 = 2133923580U;
int zero = 0;
unsigned char var_19 = (unsigned char)212;
short var_20 = (short)-22925;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
