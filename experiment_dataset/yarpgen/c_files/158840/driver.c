#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9185644099953908747LL;
unsigned int var_2 = 1885375880U;
_Bool var_3 = (_Bool)1;
int var_7 = 1272513629;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -288277297;
signed char var_13 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
