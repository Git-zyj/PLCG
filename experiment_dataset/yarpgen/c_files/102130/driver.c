#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4241644608U;
unsigned int var_4 = 1896078794U;
_Bool var_5 = (_Bool)1;
int var_14 = -531630094;
int zero = 0;
long long int var_15 = -3909596692963214573LL;
short var_16 = (short)20192;
unsigned long long int var_17 = 1564769457127937747ULL;
void init() {
}

void checksum() {
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
