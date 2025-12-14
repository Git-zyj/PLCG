#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11432;
int var_2 = -1784284189;
unsigned char var_4 = (unsigned char)203;
unsigned char var_5 = (unsigned char)30;
unsigned char var_8 = (unsigned char)7;
unsigned short var_12 = (unsigned short)48358;
unsigned long long int var_13 = 8039406537867333734ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)198;
_Bool var_17 = (_Bool)1;
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
