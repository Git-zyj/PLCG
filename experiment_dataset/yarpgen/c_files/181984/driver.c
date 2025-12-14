#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)114;
unsigned long long int var_5 = 4252664348732518114ULL;
unsigned short var_6 = (unsigned short)621;
signed char var_9 = (signed char)8;
int zero = 0;
signed char var_10 = (signed char)47;
long long int var_11 = 4258968208974198851LL;
unsigned char var_12 = (unsigned char)250;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
