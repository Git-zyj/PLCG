#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_4 = -2385054802507500482LL;
unsigned int var_5 = 3891842776U;
unsigned char var_7 = (unsigned char)214;
unsigned long long int var_9 = 8255589287344197757ULL;
unsigned short var_11 = (unsigned short)48307;
unsigned char var_13 = (unsigned char)155;
int zero = 0;
unsigned long long int var_14 = 4544804745373714875ULL;
unsigned short var_15 = (unsigned short)56667;
void init() {
}

void checksum() {
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
