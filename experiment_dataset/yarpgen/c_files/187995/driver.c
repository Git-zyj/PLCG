#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
short var_5 = (short)21878;
unsigned char var_7 = (unsigned char)155;
int zero = 0;
unsigned char var_15 = (unsigned char)215;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1172299599U;
unsigned char var_18 = (unsigned char)78;
unsigned int var_19 = 2241061838U;
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
