#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2488;
short var_5 = (short)-32338;
_Bool var_7 = (_Bool)0;
short var_8 = (short)26394;
short var_9 = (short)-2031;
short var_10 = (short)-8173;
short var_11 = (short)-25346;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)19152;
void init() {
}

void checksum() {
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
