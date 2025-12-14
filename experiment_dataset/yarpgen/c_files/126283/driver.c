#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 977126156750851026LL;
long long int var_2 = 9126042947926790688LL;
long long int var_12 = 6702353065005478867LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_14 = 4505922412895794294LL;
short var_15 = (short)-23356;
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
