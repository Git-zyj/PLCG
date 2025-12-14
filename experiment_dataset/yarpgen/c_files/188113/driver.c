#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7721371466343494821LL;
unsigned int var_2 = 1967953935U;
_Bool var_5 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 1511855307U;
unsigned char var_16 = (unsigned char)143;
_Bool var_17 = (_Bool)0;
long long int var_18 = 7443393550153565422LL;
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
