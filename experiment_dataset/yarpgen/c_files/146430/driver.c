#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
unsigned long long int var_1 = 16693726679409135062ULL;
unsigned long long int var_6 = 12023564940629208135ULL;
unsigned int var_8 = 1486137876U;
unsigned char var_9 = (unsigned char)189;
unsigned long long int var_10 = 16622148239470749887ULL;
long long int var_11 = -8682223297744449009LL;
short var_17 = (short)8877;
int zero = 0;
unsigned long long int var_19 = 3027397009521738989ULL;
unsigned char var_20 = (unsigned char)13;
unsigned int var_21 = 1177375134U;
unsigned char var_22 = (unsigned char)48;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
