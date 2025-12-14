#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1554015750U;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-123;
unsigned long long int var_5 = 16635711875946860396ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)65422;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)43;
unsigned short var_10 = (unsigned short)13954;
short var_11 = (short)-6626;
int var_12 = 1300152348;
int zero = 0;
signed char var_13 = (signed char)-81;
short var_14 = (short)2135;
unsigned char var_15 = (unsigned char)244;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
