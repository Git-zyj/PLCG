#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10204971167147625555ULL;
int var_2 = -237661183;
int var_5 = -1660760275;
unsigned short var_6 = (unsigned short)6379;
unsigned long long int var_7 = 1272297322653604695ULL;
unsigned short var_10 = (unsigned short)28736;
signed char var_13 = (signed char)-33;
int var_14 = -1568389508;
int zero = 0;
signed char var_15 = (signed char)73;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)74;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
