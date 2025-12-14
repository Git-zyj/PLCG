#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25321;
short var_1 = (short)-14860;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)214;
signed char var_8 = (signed char)-87;
unsigned long long int var_15 = 4446522121805944295ULL;
int zero = 0;
unsigned long long int var_16 = 11530555905847012248ULL;
signed char var_17 = (signed char)33;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-14464;
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
