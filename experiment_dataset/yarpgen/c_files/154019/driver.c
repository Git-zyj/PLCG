#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1460674470U;
unsigned long long int var_5 = 4972817246844160415ULL;
unsigned long long int var_7 = 4669283584426841659ULL;
long long int var_8 = 6549159654511214681LL;
unsigned long long int var_11 = 13195043474421025455ULL;
int zero = 0;
unsigned int var_15 = 929360174U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
