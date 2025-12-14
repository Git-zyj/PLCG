#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 963970184U;
unsigned int var_1 = 3731462721U;
short var_2 = (short)-32514;
int var_4 = -376008724;
unsigned short var_6 = (unsigned short)57410;
unsigned char var_8 = (unsigned char)2;
unsigned short var_9 = (unsigned short)24931;
unsigned char var_10 = (unsigned char)132;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 229253992U;
int var_13 = 2085663031;
unsigned char var_14 = (unsigned char)27;
unsigned int var_15 = 244041444U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
