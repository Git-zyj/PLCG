#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12447850718706105969ULL;
long long int var_2 = 3459963907074589313LL;
short var_3 = (short)19779;
unsigned int var_5 = 1812118273U;
signed char var_7 = (signed char)66;
unsigned char var_11 = (unsigned char)243;
int zero = 0;
unsigned int var_12 = 4214286515U;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
