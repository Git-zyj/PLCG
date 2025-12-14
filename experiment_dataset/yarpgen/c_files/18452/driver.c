#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 890806035U;
unsigned int var_2 = 3642504462U;
signed char var_3 = (signed char)106;
unsigned int var_7 = 2552474851U;
unsigned int var_10 = 3426881296U;
int var_11 = 414447833;
int zero = 0;
short var_15 = (short)23618;
unsigned int var_16 = 1877621911U;
unsigned int var_17 = 421161432U;
long long int var_18 = -5361887513416020181LL;
void init() {
}

void checksum() {
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
