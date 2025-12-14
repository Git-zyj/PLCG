#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_4 = (short)-7875;
int var_7 = 2079133155;
signed char var_8 = (signed char)3;
long long int var_11 = 6290275672726189593LL;
signed char var_12 = (signed char)45;
int zero = 0;
int var_13 = -906655046;
_Bool var_14 = (_Bool)1;
long long int var_15 = 3649719862308127451LL;
long long int var_16 = -6276492791447913814LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
