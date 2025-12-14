#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1156409628;
signed char var_2 = (signed char)55;
unsigned int var_7 = 2349027359U;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3959581775U;
unsigned int var_15 = 677210058U;
signed char var_16 = (signed char)30;
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
