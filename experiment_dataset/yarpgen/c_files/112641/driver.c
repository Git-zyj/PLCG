#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 904502739U;
unsigned int var_12 = 256685910U;
unsigned int var_18 = 832938478U;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-44;
unsigned long long int var_21 = 17344201977624172641ULL;
unsigned char var_22 = (unsigned char)80;
unsigned int var_23 = 2294093U;
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
