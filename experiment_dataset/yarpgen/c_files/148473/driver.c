#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)24959;
unsigned short var_7 = (unsigned short)3647;
long long int var_9 = 726376178386723292LL;
int zero = 0;
long long int var_10 = 5038350134300391001LL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 10204876845204576569ULL;
int var_13 = -1180134913;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
