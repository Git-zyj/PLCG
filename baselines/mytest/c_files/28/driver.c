#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1239676283U;
unsigned long long int var_5 = 3608360342051119556ULL;
unsigned int var_7 = 4285494040U;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)158;
int zero = 0;
int var_14 = -658999539;
unsigned long long int var_15 = 13250845787833612046ULL;
long long int var_16 = 452395726375170766LL;
signed char var_17 = (signed char)91;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
