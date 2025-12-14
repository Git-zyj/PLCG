#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1980425053U;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 15288658970885066371ULL;
short var_12 = (short)-4681;
signed char var_14 = (signed char)69;
long long int var_15 = 6543738574079140783LL;
int zero = 0;
unsigned long long int var_16 = 16967079603690722307ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
