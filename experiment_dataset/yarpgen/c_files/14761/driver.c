#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)9190;
signed char var_4 = (signed char)114;
unsigned short var_8 = (unsigned short)56998;
long long int var_11 = -2269527124291408050LL;
int zero = 0;
long long int var_20 = -5731044889373199345LL;
_Bool var_21 = (_Bool)0;
long long int var_22 = -7685821786762056569LL;
unsigned short var_23 = (unsigned short)55971;
unsigned short var_24 = (unsigned short)29936;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
