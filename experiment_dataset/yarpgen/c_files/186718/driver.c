#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10149394750214752652ULL;
_Bool var_7 = (_Bool)0;
long long int var_9 = 413235042882592489LL;
int zero = 0;
unsigned short var_10 = (unsigned short)37687;
unsigned long long int var_11 = 5158921270841756531ULL;
signed char var_12 = (signed char)-125;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
