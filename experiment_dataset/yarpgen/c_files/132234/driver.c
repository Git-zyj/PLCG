#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)-22894;
short var_7 = (short)-5275;
unsigned long long int var_9 = 13452518477097658463ULL;
signed char var_12 = (signed char)70;
int zero = 0;
signed char var_14 = (signed char)-126;
signed char var_15 = (signed char)-11;
signed char var_16 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
