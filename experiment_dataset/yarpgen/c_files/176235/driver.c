#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)33905;
long long int var_6 = 6909946583205628225LL;
signed char var_8 = (signed char)82;
unsigned long long int var_10 = 11505641613714852038ULL;
unsigned int var_12 = 2846752976U;
int var_15 = 680893050;
int zero = 0;
short var_18 = (short)16414;
short var_19 = (short)10913;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
