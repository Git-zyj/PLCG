#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 159698263796297238ULL;
_Bool var_6 = (_Bool)0;
int var_7 = -962226484;
unsigned int var_10 = 652785975U;
int zero = 0;
long long int var_14 = -3991004750246322339LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 15159971806332707279ULL;
unsigned char var_17 = (unsigned char)234;
int var_18 = -672102199;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
