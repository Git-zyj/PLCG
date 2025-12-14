#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21866;
unsigned char var_3 = (unsigned char)132;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)44;
unsigned char var_9 = (unsigned char)44;
unsigned char var_10 = (unsigned char)51;
unsigned long long int var_12 = 6108439570825789750ULL;
int zero = 0;
unsigned int var_18 = 3713952581U;
unsigned short var_19 = (unsigned short)6619;
unsigned char var_20 = (unsigned char)134;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
