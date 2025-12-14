#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2076482830605634531LL;
long long int var_4 = -4885102845217037238LL;
unsigned short var_5 = (unsigned short)48426;
unsigned long long int var_7 = 1228251118758669909ULL;
long long int var_10 = 7717549886885386865LL;
unsigned int var_13 = 1919747471U;
signed char var_19 = (signed char)42;
int zero = 0;
unsigned short var_20 = (unsigned short)37456;
unsigned long long int var_21 = 13265002424066306918ULL;
signed char var_22 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
