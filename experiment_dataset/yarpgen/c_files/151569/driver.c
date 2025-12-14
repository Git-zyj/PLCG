#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
unsigned long long int var_10 = 10767439848417464314ULL;
_Bool var_13 = (_Bool)1;
long long int var_16 = -5096566258379542777LL;
signed char var_19 = (signed char)-124;
int zero = 0;
short var_20 = (short)30013;
unsigned char var_21 = (unsigned char)37;
int var_22 = -625366855;
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
