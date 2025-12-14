#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4970177738566747128LL;
unsigned short var_3 = (unsigned short)18524;
unsigned int var_5 = 2832174773U;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 3443094284U;
int var_9 = 1564010706;
int zero = 0;
unsigned char var_11 = (unsigned char)127;
unsigned char var_12 = (unsigned char)83;
short var_13 = (short)-1866;
short var_14 = (short)-8388;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
