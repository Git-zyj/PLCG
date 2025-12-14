#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 4737723614688758332ULL;
unsigned short var_8 = (unsigned short)12052;
signed char var_12 = (signed char)-16;
unsigned short var_13 = (unsigned short)17758;
int zero = 0;
short var_17 = (short)5111;
long long int var_18 = 6298093028716520102LL;
unsigned short var_19 = (unsigned short)50166;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
