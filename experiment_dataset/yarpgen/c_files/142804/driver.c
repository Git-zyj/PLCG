#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7938464643678850102ULL;
unsigned int var_1 = 2076449724U;
int var_2 = 87019145;
_Bool var_6 = (_Bool)1;
int var_12 = -706257915;
int var_13 = 261043226;
int zero = 0;
unsigned char var_16 = (unsigned char)203;
unsigned char var_17 = (unsigned char)76;
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
