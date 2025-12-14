#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
int var_4 = 2091909776;
int var_6 = -1072783347;
int var_9 = -847748780;
_Bool var_11 = (_Bool)0;
long long int var_12 = 6267094024946781341LL;
int zero = 0;
long long int var_15 = -215094631937204939LL;
int var_16 = -861296893;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
