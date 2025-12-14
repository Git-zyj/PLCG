#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 11986532902078814605ULL;
long long int var_13 = -8586654565853785755LL;
signed char var_16 = (signed char)-64;
signed char var_19 = (signed char)-47;
int zero = 0;
unsigned short var_20 = (unsigned short)58267;
unsigned int var_21 = 1263096752U;
signed char var_22 = (signed char)23;
unsigned short var_23 = (unsigned short)56927;
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
