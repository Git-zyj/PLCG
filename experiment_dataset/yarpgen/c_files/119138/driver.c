#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-86;
unsigned long long int var_5 = 11489273774700910247ULL;
int var_8 = -881458987;
int var_11 = -524254598;
unsigned char var_12 = (unsigned char)94;
short var_13 = (short)5806;
int zero = 0;
int var_16 = 1959074003;
int var_17 = -821963464;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)158;
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
