#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3339064232886019731LL;
_Bool var_2 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 3915783122U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 7599150217634153779ULL;
void init() {
}

void checksum() {
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
