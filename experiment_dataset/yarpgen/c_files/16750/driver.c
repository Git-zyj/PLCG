#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4073687535U;
long long int var_3 = 1734525686677511711LL;
_Bool var_5 = (_Bool)0;
short var_7 = (short)11670;
unsigned int var_17 = 1836601226U;
int zero = 0;
long long int var_19 = -3340428661960172002LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
