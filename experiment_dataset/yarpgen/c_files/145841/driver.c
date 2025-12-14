#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)2;
unsigned short var_3 = (unsigned short)13163;
int var_4 = 1095684310;
unsigned char var_6 = (unsigned char)253;
short var_10 = (short)-25941;
short var_11 = (short)-24964;
unsigned char var_14 = (unsigned char)227;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = 1092150501176409349LL;
short var_17 = (short)8954;
short var_18 = (short)5975;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
