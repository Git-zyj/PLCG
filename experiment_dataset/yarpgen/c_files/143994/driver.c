#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
_Bool var_6 = (_Bool)0;
long long int var_10 = 8044456287047006605LL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)21;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)14;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
