#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2380604536U;
signed char var_3 = (signed char)112;
short var_6 = (short)-30028;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)43;
short var_9 = (short)23654;
int var_10 = 2101943449;
unsigned int var_11 = 2800843056U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)46256;
signed char var_17 = (signed char)-87;
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
