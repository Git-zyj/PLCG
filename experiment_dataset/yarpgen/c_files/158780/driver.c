#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2121;
int var_4 = 384809210;
signed char var_9 = (signed char)-68;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 6166630699581183148LL;
int var_15 = -1724675096;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
