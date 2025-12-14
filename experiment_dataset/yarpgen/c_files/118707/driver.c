#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)1179;
unsigned int var_7 = 568970915U;
unsigned char var_8 = (unsigned char)193;
signed char var_10 = (signed char)-2;
signed char var_11 = (signed char)72;
signed char var_14 = (signed char)54;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-1433;
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
