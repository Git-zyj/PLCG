#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
short var_11 = (short)-10286;
short var_15 = (short)15059;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -8034937332733340378LL;
unsigned long long int var_20 = 1131085811336442855ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
