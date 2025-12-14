#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -984922794122658505LL;
unsigned short var_4 = (unsigned short)3432;
unsigned int var_5 = 1360361117U;
short var_9 = (short)-22236;
unsigned long long int var_12 = 13430623098883630152ULL;
int zero = 0;
long long int var_19 = -5015496913390830405LL;
unsigned long long int var_20 = 4469704579375620768ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
