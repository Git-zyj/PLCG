#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)16043;
unsigned int var_9 = 1739212617U;
signed char var_14 = (signed char)22;
unsigned int var_18 = 1453071957U;
int zero = 0;
short var_20 = (short)-14860;
short var_21 = (short)-28835;
unsigned int var_22 = 1938737797U;
void init() {
}

void checksum() {
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
