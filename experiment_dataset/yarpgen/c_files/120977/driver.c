#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2935835626525841273LL;
unsigned char var_1 = (unsigned char)238;
unsigned long long int var_3 = 4050175919459636185ULL;
unsigned short var_8 = (unsigned short)58979;
int var_9 = -348640752;
unsigned char var_10 = (unsigned char)185;
int zero = 0;
unsigned int var_15 = 2219769744U;
unsigned int var_16 = 915804904U;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 969159353U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
