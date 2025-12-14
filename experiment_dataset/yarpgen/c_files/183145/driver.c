#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)57;
unsigned long long int var_1 = 5613950826551892605ULL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned int var_7 = 1929753158U;
unsigned int var_10 = 1016005800U;
unsigned int var_11 = 1374442455U;
_Bool var_12 = (_Bool)1;
signed char var_15 = (signed char)-7;
int zero = 0;
unsigned int var_16 = 121600036U;
long long int var_17 = 5561209157149448731LL;
unsigned char var_18 = (unsigned char)143;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
