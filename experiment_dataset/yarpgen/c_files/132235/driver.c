#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2377875136376818939ULL;
unsigned int var_4 = 3373564388U;
long long int var_5 = -4060870753125453310LL;
long long int var_7 = -5373170835624305947LL;
int zero = 0;
signed char var_15 = (signed char)24;
long long int var_16 = 8552458652865545249LL;
_Bool var_17 = (_Bool)1;
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
