#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)20548;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 1285873697305344470ULL;
_Bool var_8 = (_Bool)1;
int var_9 = 1591208312;
int zero = 0;
unsigned int var_10 = 2143074998U;
int var_11 = -1448283086;
long long int var_12 = -5489074088111771227LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
