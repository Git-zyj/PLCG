#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = -997321724283407605LL;
unsigned short var_4 = (unsigned short)38244;
short var_5 = (short)-16156;
unsigned short var_8 = (unsigned short)53117;
int var_10 = 674186789;
signed char var_11 = (signed char)-119;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 771925393U;
long long int var_21 = -8304418181137038717LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
