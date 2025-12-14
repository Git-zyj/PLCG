#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48036;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 17516897111120921297ULL;
long long int var_9 = -1099781288520092615LL;
int zero = 0;
unsigned long long int var_11 = 196561512578663001ULL;
unsigned long long int var_12 = 5297929000950247448ULL;
void init() {
}

void checksum() {
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
