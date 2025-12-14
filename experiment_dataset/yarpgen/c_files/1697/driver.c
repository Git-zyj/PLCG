#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
long long int var_1 = 7944085736470662183LL;
unsigned char var_3 = (unsigned char)94;
unsigned short var_5 = (unsigned short)27522;
unsigned short var_10 = (unsigned short)30860;
unsigned short var_12 = (unsigned short)61779;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)71;
unsigned char var_21 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
