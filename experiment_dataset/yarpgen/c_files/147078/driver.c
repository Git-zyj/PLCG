#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
signed char var_7 = (signed char)-29;
unsigned long long int var_10 = 13995146396152467675ULL;
short var_11 = (short)21073;
unsigned long long int var_13 = 13030610954875634708ULL;
short var_14 = (short)16301;
int zero = 0;
unsigned int var_17 = 276288773U;
signed char var_18 = (signed char)-59;
long long int var_19 = -9070034209794038156LL;
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
