#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1103570008U;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)117;
unsigned int var_12 = 1732559070U;
signed char var_13 = (signed char)35;
unsigned int var_16 = 1914058717U;
unsigned short var_17 = (unsigned short)2586;
int zero = 0;
unsigned char var_18 = (unsigned char)218;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1162260759U;
_Bool var_21 = (_Bool)1;
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
