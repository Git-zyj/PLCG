#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 4219436693U;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)210;
int zero = 0;
int var_10 = -695717065;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)64940;
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
