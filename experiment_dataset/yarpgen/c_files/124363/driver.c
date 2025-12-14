#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)31846;
unsigned char var_2 = (unsigned char)118;
long long int var_3 = -5916070764047140986LL;
unsigned long long int var_4 = 15953606164184753737ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
long long int var_9 = -5835776231410311331LL;
short var_11 = (short)12086;
long long int var_12 = 767633278683255366LL;
unsigned short var_13 = (unsigned short)42062;
int zero = 0;
unsigned int var_14 = 2608872483U;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 5409171905380535799ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
