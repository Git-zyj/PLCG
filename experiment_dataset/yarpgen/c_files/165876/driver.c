#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2906295302735532246LL;
unsigned long long int var_1 = 14284603927145178741ULL;
signed char var_4 = (signed char)35;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2623373764U;
short var_14 = (short)7674;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
