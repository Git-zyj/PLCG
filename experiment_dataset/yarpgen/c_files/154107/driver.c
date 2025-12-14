#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6042151892862922846LL;
unsigned int var_4 = 3749792773U;
_Bool var_6 = (_Bool)0;
long long int var_7 = -3452669261633917151LL;
unsigned int var_11 = 426105484U;
unsigned long long int var_16 = 10750714636804274813ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 11837543060275339879ULL;
short var_20 = (short)5258;
void init() {
}

void checksum() {
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
