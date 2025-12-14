#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 499504998;
unsigned long long int var_8 = 144864345700743171ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_12 = 1469260137;
unsigned long long int var_13 = 5749598295535396070ULL;
void init() {
}

void checksum() {
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
