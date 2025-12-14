#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)110;
int zero = 0;
unsigned char var_13 = (unsigned char)73;
long long int var_14 = -3482041429340581611LL;
long long int var_15 = -8742698380773859436LL;
unsigned int var_16 = 3981390548U;
unsigned char var_17 = (unsigned char)8;
long long int var_18 = 3008696344045988148LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
