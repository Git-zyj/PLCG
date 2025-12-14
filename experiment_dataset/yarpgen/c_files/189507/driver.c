#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)89;
int var_12 = -924577324;
int var_14 = -1170533657;
int zero = 0;
unsigned long long int var_15 = 11143214445833458929ULL;
unsigned long long int var_16 = 13543901669617199122ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
