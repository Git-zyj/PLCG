#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)44;
_Bool var_3 = (_Bool)0;
unsigned char var_7 = (unsigned char)220;
short var_8 = (short)-2854;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)240;
signed char var_12 = (signed char)113;
int zero = 0;
signed char var_13 = (signed char)48;
unsigned char var_14 = (unsigned char)73;
unsigned long long int var_15 = 4384106356420534950ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
