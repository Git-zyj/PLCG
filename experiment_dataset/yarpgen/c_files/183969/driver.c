#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2798459682558174967LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)49438;
unsigned int var_5 = 3418125228U;
long long int var_12 = -7817514372132253399LL;
unsigned short var_13 = (unsigned short)4445;
int zero = 0;
long long int var_15 = 1216482958014162095LL;
unsigned short var_16 = (unsigned short)55763;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
