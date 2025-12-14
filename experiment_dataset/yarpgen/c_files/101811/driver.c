#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -433518900;
signed char var_3 = (signed char)54;
short var_5 = (short)10599;
short var_6 = (short)-964;
unsigned char var_7 = (unsigned char)3;
short var_8 = (short)21535;
signed char var_9 = (signed char)118;
unsigned char var_10 = (unsigned char)104;
int zero = 0;
int var_11 = 2056568388;
unsigned long long int var_12 = 16709719354626121132ULL;
void init() {
}

void checksum() {
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
