#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6555846338784606243LL;
long long int var_8 = -4854196907046724504LL;
int zero = 0;
int var_12 = -226854604;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 6366713869786608046ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
