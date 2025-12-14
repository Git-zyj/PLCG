#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6213666210435531863LL;
short var_7 = (short)-30887;
unsigned short var_14 = (unsigned short)58177;
unsigned int var_15 = 2031447607U;
unsigned char var_16 = (unsigned char)176;
unsigned short var_19 = (unsigned short)44399;
int zero = 0;
int var_20 = -614644176;
unsigned char var_21 = (unsigned char)189;
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
