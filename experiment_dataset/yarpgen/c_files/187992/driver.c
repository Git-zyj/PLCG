#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4634507095524053681ULL;
unsigned int var_8 = 2959871326U;
int zero = 0;
unsigned long long int var_10 = 2012315003072801713ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 10374218979771288387ULL;
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
