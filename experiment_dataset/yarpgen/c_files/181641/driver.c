#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-88;
unsigned short var_7 = (unsigned short)11073;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 358277925084208693ULL;
int zero = 0;
unsigned long long int var_12 = 1591644362115306926ULL;
_Bool var_13 = (_Bool)1;
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
