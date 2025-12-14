#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)45;
unsigned long long int var_1 = 1767767776120907789ULL;
unsigned short var_4 = (unsigned short)33254;
unsigned char var_5 = (unsigned char)159;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 982919560U;
int zero = 0;
unsigned int var_10 = 365912750U;
unsigned char var_11 = (unsigned char)225;
unsigned short var_12 = (unsigned short)8551;
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
