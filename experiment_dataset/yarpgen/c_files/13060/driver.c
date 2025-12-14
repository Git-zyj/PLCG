#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_8 = -3393697055043267264LL;
unsigned long long int var_11 = 9065731064345236269ULL;
unsigned char var_13 = (unsigned char)56;
signed char var_17 = (signed char)-6;
int zero = 0;
unsigned char var_18 = (unsigned char)233;
signed char var_19 = (signed char)59;
_Bool var_20 = (_Bool)0;
short var_21 = (short)21898;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
