#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_6 = 869148745611829851ULL;
unsigned int var_7 = 3378522725U;
unsigned int var_11 = 2055028384U;
signed char var_16 = (signed char)76;
int zero = 0;
unsigned char var_17 = (unsigned char)143;
int var_18 = 830867613;
unsigned short var_19 = (unsigned short)37418;
unsigned short var_20 = (unsigned short)17395;
signed char var_21 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
