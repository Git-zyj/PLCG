#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)29;
signed char var_3 = (signed char)59;
short var_5 = (short)17943;
long long int var_6 = 9179342457393817712LL;
short var_8 = (short)8643;
long long int var_13 = 3754085084566553062LL;
short var_16 = (short)-3166;
int zero = 0;
signed char var_17 = (signed char)27;
int var_18 = 1961055490;
short var_19 = (short)7635;
void init() {
}

void checksum() {
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
