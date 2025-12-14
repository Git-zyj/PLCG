#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)124;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)2;
unsigned char var_13 = (unsigned char)200;
unsigned char var_14 = (unsigned char)250;
int zero = 0;
short var_15 = (short)26736;
signed char var_16 = (signed char)-115;
void init() {
}

void checksum() {
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
