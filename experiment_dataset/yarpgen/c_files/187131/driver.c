#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10265755563566481304ULL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)53;
short var_15 = (short)8688;
int zero = 0;
long long int var_16 = -8934596872641674950LL;
unsigned int var_17 = 3958661185U;
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
