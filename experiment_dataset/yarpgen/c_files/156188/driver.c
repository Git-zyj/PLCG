#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)164;
short var_5 = (short)1562;
short var_11 = (short)-23189;
signed char var_12 = (signed char)52;
unsigned char var_15 = (unsigned char)131;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-30;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
