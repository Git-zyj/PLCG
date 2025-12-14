#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)29;
short var_5 = (short)-26659;
unsigned char var_9 = (unsigned char)161;
unsigned char var_10 = (unsigned char)164;
unsigned short var_12 = (unsigned short)4944;
unsigned char var_15 = (unsigned char)30;
int zero = 0;
long long int var_16 = 3155475940859723470LL;
short var_17 = (short)29908;
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
