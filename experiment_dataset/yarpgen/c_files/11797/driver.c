#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -9167211889759085011LL;
signed char var_7 = (signed char)-106;
int var_8 = 1086039937;
unsigned short var_10 = (unsigned short)26803;
int zero = 0;
short var_12 = (short)-15021;
unsigned char var_13 = (unsigned char)141;
int var_14 = 1160578920;
unsigned int var_15 = 318252617U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
