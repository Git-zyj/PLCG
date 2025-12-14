#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4021261960889448701LL;
int var_7 = -604897931;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3598588724U;
int zero = 0;
long long int var_13 = -2815560304360742276LL;
signed char var_14 = (signed char)125;
short var_15 = (short)19431;
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
