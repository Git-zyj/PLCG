#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-30892;
short var_4 = (short)-6301;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 6656354303327575774ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)75;
int zero = 0;
short var_10 = (short)10982;
unsigned char var_11 = (unsigned char)49;
unsigned int var_12 = 572777947U;
signed char var_13 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
