#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6372780107625037251ULL;
_Bool var_3 = (_Bool)1;
short var_5 = (short)26883;
unsigned int var_8 = 3592487229U;
short var_12 = (short)3685;
int zero = 0;
int var_16 = -2016805948;
unsigned char var_17 = (unsigned char)134;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
