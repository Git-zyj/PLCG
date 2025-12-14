#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1081479258;
unsigned long long int var_3 = 8643641163865176558ULL;
unsigned short var_5 = (unsigned short)62459;
short var_6 = (short)-25414;
unsigned long long int var_10 = 16175459799882160549ULL;
long long int var_12 = -1503380819883310187LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_15 = 2234897576606174168ULL;
int zero = 0;
signed char var_19 = (signed char)83;
unsigned long long int var_20 = 18323850137319014564ULL;
void init() {
}

void checksum() {
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
