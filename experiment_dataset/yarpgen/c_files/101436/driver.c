#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-103;
unsigned int var_2 = 3796275826U;
int var_4 = 1303893189;
int var_5 = -709524495;
_Bool var_6 = (_Bool)0;
short var_7 = (short)24461;
unsigned int var_8 = 4174275304U;
unsigned int var_10 = 2038110992U;
signed char var_12 = (signed char)42;
unsigned int var_13 = 3097104830U;
int zero = 0;
unsigned int var_14 = 4197244716U;
long long int var_15 = -1121733898609078108LL;
unsigned int var_16 = 2954591572U;
unsigned int var_17 = 3664856278U;
signed char var_18 = (signed char)75;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
