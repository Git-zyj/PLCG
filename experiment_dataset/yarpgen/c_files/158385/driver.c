#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
short var_12 = (short)29281;
unsigned long long int var_17 = 16439649599460111036ULL;
int zero = 0;
unsigned int var_20 = 1958316917U;
unsigned char var_21 = (unsigned char)172;
int var_22 = 1987144337;
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
