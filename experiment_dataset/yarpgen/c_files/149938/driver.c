#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_5 = 7902194250963921264LL;
signed char var_10 = (signed char)8;
signed char var_11 = (signed char)-82;
unsigned short var_14 = (unsigned short)60636;
int zero = 0;
short var_15 = (short)-26798;
unsigned int var_16 = 3025931992U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
