#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -1422525187;
unsigned short var_2 = (unsigned short)7103;
int var_3 = -1709294420;
unsigned short var_4 = (unsigned short)56239;
unsigned char var_5 = (unsigned char)114;
int var_6 = 641206250;
signed char var_11 = (signed char)-42;
int var_13 = 483393158;
unsigned char var_14 = (unsigned char)188;
int zero = 0;
signed char var_16 = (signed char)109;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)44057;
int var_19 = 1895481389;
void init() {
}

void checksum() {
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
