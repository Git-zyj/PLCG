#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35830;
unsigned char var_3 = (unsigned char)41;
unsigned short var_4 = (unsigned short)46362;
unsigned long long int var_5 = 11698860276680956317ULL;
short var_7 = (short)-32357;
unsigned short var_9 = (unsigned short)49405;
unsigned char var_10 = (unsigned char)123;
int zero = 0;
signed char var_11 = (signed char)46;
long long int var_12 = 3770632592323095037LL;
unsigned long long int var_13 = 10148277539592566661ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
