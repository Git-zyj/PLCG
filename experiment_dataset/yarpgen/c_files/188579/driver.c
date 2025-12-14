#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3986599667U;
unsigned long long int var_4 = 8347597056858558249ULL;
int var_12 = 324102026;
short var_13 = (short)-28217;
long long int var_15 = 4416709684961535581LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3304050841U;
unsigned int var_20 = 1913187344U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
