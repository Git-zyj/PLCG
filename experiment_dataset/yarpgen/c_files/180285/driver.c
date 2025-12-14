#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3714717306U;
short var_7 = (short)4012;
unsigned int var_12 = 2050125519U;
short var_14 = (short)9112;
long long int var_15 = -1821109773238572139LL;
int zero = 0;
signed char var_19 = (signed char)98;
unsigned long long int var_20 = 3204284040316975862ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
