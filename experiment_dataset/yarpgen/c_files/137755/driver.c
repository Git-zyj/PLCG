#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-97;
long long int var_3 = -2052670573786075152LL;
_Bool var_4 = (_Bool)1;
int var_5 = 2117614736;
unsigned char var_11 = (unsigned char)202;
_Bool var_12 = (_Bool)1;
int var_13 = -1824997149;
int zero = 0;
unsigned long long int var_14 = 7257615244640947489ULL;
int var_15 = 692576581;
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
