#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5301;
signed char var_1 = (signed char)67;
short var_5 = (short)1455;
long long int var_6 = -3461335755414363876LL;
int zero = 0;
short var_16 = (short)-31849;
signed char var_17 = (signed char)-28;
void init() {
}

void checksum() {
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
