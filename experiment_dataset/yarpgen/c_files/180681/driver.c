#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_12 = 985723776U;
_Bool var_13 = (_Bool)0;
long long int var_15 = 7609843770030156329LL;
long long int var_16 = -3787356603089223611LL;
int zero = 0;
unsigned int var_17 = 2227715246U;
unsigned int var_18 = 1723519829U;
void init() {
}

void checksum() {
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
