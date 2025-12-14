#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)56;
_Bool var_2 = (_Bool)0;
long long int var_6 = 2363734186108524429LL;
unsigned short var_8 = (unsigned short)25002;
unsigned int var_11 = 2450620167U;
int zero = 0;
unsigned int var_12 = 3325401495U;
long long int var_13 = -1036483772841676088LL;
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
