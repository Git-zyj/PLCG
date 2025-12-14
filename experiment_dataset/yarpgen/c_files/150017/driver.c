#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)4323;
_Bool var_7 = (_Bool)0;
short var_10 = (short)9470;
short var_11 = (short)-30989;
int zero = 0;
unsigned short var_17 = (unsigned short)35393;
unsigned int var_18 = 1742926061U;
short var_19 = (short)12134;
signed char var_20 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
