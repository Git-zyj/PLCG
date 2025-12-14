#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3959449037U;
short var_1 = (short)15080;
unsigned long long int var_3 = 15243560782706375174ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_13 = (short)-29365;
short var_14 = (short)-3343;
short var_15 = (short)30991;
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
