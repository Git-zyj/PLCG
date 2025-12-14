#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 7123033770342857352LL;
int var_3 = -2142666625;
int var_5 = 1564867022;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 2861862095U;
unsigned int var_8 = 1681280936U;
unsigned short var_10 = (unsigned short)7491;
long long int var_11 = 8275890587648697246LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = 4101752134438460994LL;
unsigned short var_14 = (unsigned short)17519;
void init() {
}

void checksum() {
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
