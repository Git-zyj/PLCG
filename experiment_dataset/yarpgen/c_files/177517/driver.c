#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46094;
_Bool var_1 = (_Bool)1;
short var_2 = (short)10165;
int var_7 = 1846981600;
int var_14 = -2050845179;
signed char var_18 = (signed char)-99;
int zero = 0;
unsigned int var_20 = 3865680660U;
long long int var_21 = 2064612979150465001LL;
short var_22 = (short)15026;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
