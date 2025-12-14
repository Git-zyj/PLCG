#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 8134184415220045359ULL;
int var_11 = 1010316992;
short var_12 = (short)13293;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_18 = -1298729683;
int var_19 = 2135796458;
short var_20 = (short)28307;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
