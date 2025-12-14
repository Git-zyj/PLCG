#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -680019903;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)12230;
unsigned char var_6 = (unsigned char)215;
unsigned long long int var_10 = 1473405114917660974ULL;
short var_11 = (short)-25346;
long long int var_12 = 8409525361080060728LL;
int zero = 0;
signed char var_15 = (signed char)7;
unsigned short var_16 = (unsigned short)54454;
unsigned long long int var_17 = 441877007799585847ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
