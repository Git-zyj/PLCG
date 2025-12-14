#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -2753013995001112538LL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3576812264U;
short var_12 = (short)-26890;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2237011172U;
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
