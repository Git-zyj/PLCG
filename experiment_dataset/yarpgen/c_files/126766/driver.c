#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7739842032739789756LL;
short var_3 = (short)18258;
_Bool var_5 = (_Bool)1;
long long int var_6 = 1794300040996844695LL;
long long int var_11 = 7602630988643341732LL;
int zero = 0;
int var_14 = -1580798575;
_Bool var_15 = (_Bool)0;
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
