#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6807643735884101829ULL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
long long int var_7 = -3168438775748754034LL;
short var_15 = (short)-2279;
int zero = 0;
short var_17 = (short)447;
short var_18 = (short)6783;
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
