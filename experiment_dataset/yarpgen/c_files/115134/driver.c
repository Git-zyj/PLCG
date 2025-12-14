#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 10183569604322826936ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)56;
short var_12 = (short)5056;
unsigned int var_14 = 1744524469U;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 11443206195397859048ULL;
unsigned char var_17 = (unsigned char)41;
long long int var_18 = 1693076524848209287LL;
int zero = 0;
int var_19 = -580838056;
unsigned char var_20 = (unsigned char)215;
unsigned int var_21 = 466417169U;
signed char var_22 = (signed char)54;
unsigned char var_23 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
