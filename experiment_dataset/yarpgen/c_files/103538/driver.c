#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_9 = (short)4685;
unsigned char var_10 = (unsigned char)239;
_Bool var_11 = (_Bool)1;
short var_14 = (short)-22664;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-33;
unsigned char var_17 = (unsigned char)40;
unsigned char var_18 = (unsigned char)45;
unsigned char var_19 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
