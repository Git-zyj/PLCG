#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_7 = (short)-22606;
unsigned long long int var_8 = 10553267965264457025ULL;
int zero = 0;
signed char var_13 = (signed char)-42;
short var_14 = (short)-31867;
unsigned long long int var_15 = 14803662757925189719ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
