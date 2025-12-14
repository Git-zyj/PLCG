#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 176457949U;
_Bool var_4 = (_Bool)0;
short var_12 = (short)8376;
signed char var_14 = (signed char)69;
long long int var_15 = -7528322783818313511LL;
int zero = 0;
long long int var_19 = 3260289271825908298LL;
unsigned int var_20 = 2618574515U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
