#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1158857512U;
unsigned long long int var_5 = 5428544083835392367ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-104;
unsigned long long int var_15 = 14139204387117875089ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
