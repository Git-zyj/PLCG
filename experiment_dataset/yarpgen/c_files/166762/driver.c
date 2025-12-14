#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19873;
short var_2 = (short)5621;
_Bool var_6 = (_Bool)1;
int var_7 = 1607254405;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)84;
long long int var_17 = -4513850257393273560LL;
int var_18 = 1635151023;
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
