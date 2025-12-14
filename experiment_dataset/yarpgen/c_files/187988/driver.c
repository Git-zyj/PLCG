#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)5522;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)14;
signed char var_13 = (signed char)1;
signed char var_14 = (signed char)-18;
short var_15 = (short)-13895;
int zero = 0;
unsigned short var_16 = (unsigned short)47451;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)11088;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
