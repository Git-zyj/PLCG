#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 6563132992880659323ULL;
_Bool var_10 = (_Bool)0;
short var_15 = (short)-16675;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 10100081472674956457ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
