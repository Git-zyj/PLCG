#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21713;
unsigned int var_2 = 1250566617U;
unsigned int var_6 = 462021243U;
unsigned long long int var_10 = 578490944538217588ULL;
signed char var_12 = (signed char)60;
int zero = 0;
unsigned char var_15 = (unsigned char)69;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 11418045406754916539ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
