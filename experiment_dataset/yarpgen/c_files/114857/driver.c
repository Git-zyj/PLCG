#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1773834145;
int var_1 = -703082758;
_Bool var_4 = (_Bool)0;
int var_5 = -1678369456;
int zero = 0;
unsigned int var_10 = 1358607213U;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 12038193800722026159ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
