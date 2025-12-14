#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)11609;
signed char var_5 = (signed char)-23;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)241;
short var_8 = (short)-9997;
int zero = 0;
long long int var_10 = -2983599742917889258LL;
int var_11 = 756300254;
short var_12 = (short)-18081;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
