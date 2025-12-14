#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 209652685;
signed char var_3 = (signed char)11;
unsigned short var_9 = (unsigned short)18934;
unsigned int var_14 = 3838577899U;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 1612958375;
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
