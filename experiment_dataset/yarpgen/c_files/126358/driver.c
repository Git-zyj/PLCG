#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2038377912;
long long int var_4 = 1817949437809168084LL;
unsigned long long int var_5 = 15155499795329049022ULL;
unsigned int var_7 = 1849754211U;
int var_9 = -446184931;
unsigned long long int var_10 = 4917650367828159847ULL;
short var_19 = (short)-13852;
int zero = 0;
unsigned int var_20 = 2393316090U;
long long int var_21 = -8663704458070553392LL;
signed char var_22 = (signed char)(-127 - 1);
unsigned long long int var_23 = 14566553139296286969ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
