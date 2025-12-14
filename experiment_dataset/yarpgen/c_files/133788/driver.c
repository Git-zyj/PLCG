#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_4 = (unsigned char)134;
long long int var_5 = -1832797230023639813LL;
unsigned int var_6 = 4103025966U;
unsigned short var_12 = (unsigned short)42804;
short var_13 = (short)16837;
int zero = 0;
unsigned long long int var_16 = 1566427358026254292ULL;
unsigned int var_17 = 348651746U;
unsigned char var_18 = (unsigned char)58;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
