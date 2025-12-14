#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 9108288689838728866ULL;
signed char var_6 = (signed char)-34;
long long int var_13 = -4409117998709577855LL;
long long int var_14 = -3957673229348600351LL;
int zero = 0;
signed char var_20 = (signed char)-26;
long long int var_21 = 6625410188919096386LL;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)1795;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
