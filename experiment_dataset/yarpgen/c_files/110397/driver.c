#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2112749712U;
unsigned char var_5 = (unsigned char)20;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)63;
unsigned short var_12 = (unsigned short)47291;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
