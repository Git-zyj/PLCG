#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_8 = (signed char)-107;
_Bool var_11 = (_Bool)1;
unsigned int var_14 = 338270702U;
int zero = 0;
unsigned short var_17 = (unsigned short)34016;
short var_18 = (short)4758;
long long int var_19 = -7424255058679907906LL;
unsigned short var_20 = (unsigned short)24539;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
