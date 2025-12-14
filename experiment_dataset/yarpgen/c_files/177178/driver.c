#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)6056;
long long int var_3 = -5716062121624955136LL;
int var_5 = 1307831596;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-30749;
int zero = 0;
long long int var_10 = -969491553341350915LL;
unsigned int var_11 = 3451408016U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
