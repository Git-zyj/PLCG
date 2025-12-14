#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2288932182706001622ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_10 = 7551184074025016591ULL;
short var_13 = (short)13883;
int zero = 0;
signed char var_14 = (signed char)-62;
short var_15 = (short)23688;
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
