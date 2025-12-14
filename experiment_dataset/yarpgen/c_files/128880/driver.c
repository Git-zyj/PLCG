#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2394396315383693076ULL;
unsigned short var_7 = (unsigned short)31773;
long long int var_8 = -6583133904168310219LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)101;
signed char var_16 = (signed char)22;
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
