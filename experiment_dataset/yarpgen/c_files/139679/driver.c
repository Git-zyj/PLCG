#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
int var_10 = 1474322577;
unsigned char var_12 = (unsigned char)87;
int var_14 = 976581463;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 11262501402978507404ULL;
long long int var_19 = -6211921284305192170LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
