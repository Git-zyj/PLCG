#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22519;
short var_2 = (short)6624;
unsigned char var_8 = (unsigned char)248;
_Bool var_9 = (_Bool)1;
int var_10 = 1080725442;
unsigned long long int var_11 = 11827113454863598373ULL;
short var_12 = (short)-25288;
unsigned char var_14 = (unsigned char)158;
short var_15 = (short)2108;
int var_16 = -1365519812;
unsigned short var_17 = (unsigned short)16529;
int zero = 0;
int var_20 = 1686695695;
short var_21 = (short)-26716;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-89;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
