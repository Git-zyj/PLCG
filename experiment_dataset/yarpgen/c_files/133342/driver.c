#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
unsigned long long int var_11 = 2698616807724005602ULL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1071163633U;
int zero = 0;
unsigned long long int var_14 = 3021472005175897744ULL;
unsigned long long int var_15 = 623600587346469216ULL;
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
