#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 997333832;
int var_10 = 851322970;
unsigned char var_11 = (unsigned char)47;
unsigned long long int var_12 = 11883031651994380497ULL;
short var_16 = (short)11058;
int zero = 0;
signed char var_20 = (signed char)113;
short var_21 = (short)-19673;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
