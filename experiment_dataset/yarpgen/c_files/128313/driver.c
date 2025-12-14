#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)63;
unsigned short var_2 = (unsigned short)43754;
long long int var_4 = -2123755438836021057LL;
unsigned short var_9 = (unsigned short)1973;
int zero = 0;
unsigned int var_13 = 2680712664U;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 5103032937587920308ULL;
int var_16 = 1619376558;
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
