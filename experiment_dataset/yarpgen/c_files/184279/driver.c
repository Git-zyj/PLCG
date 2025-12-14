#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1001093018195076116ULL;
_Bool var_3 = (_Bool)1;
short var_12 = (short)-15439;
signed char var_13 = (signed char)47;
int zero = 0;
signed char var_14 = (signed char)-89;
long long int var_15 = -1815857473419624534LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
