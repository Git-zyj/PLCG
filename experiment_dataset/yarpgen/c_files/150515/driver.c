#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13879;
_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)-109;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)11;
short var_10 = (short)24898;
_Bool var_11 = (_Bool)0;
short var_13 = (short)3597;
short var_14 = (short)-19778;
int zero = 0;
signed char var_16 = (signed char)-56;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-22051;
void init() {
}

void checksum() {
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
