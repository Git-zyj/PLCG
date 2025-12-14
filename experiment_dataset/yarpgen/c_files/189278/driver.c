#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5080810494491351957LL;
unsigned int var_1 = 1020863555U;
int var_3 = -692261936;
int var_4 = -1598727897;
unsigned int var_5 = 559232363U;
_Bool var_8 = (_Bool)1;
int var_9 = 1083453797;
int zero = 0;
unsigned char var_14 = (unsigned char)173;
short var_15 = (short)-6449;
void init() {
}

void checksum() {
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
