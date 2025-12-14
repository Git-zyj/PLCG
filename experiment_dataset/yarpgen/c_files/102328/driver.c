#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_11 = (unsigned short)53533;
long long int var_14 = 5923429111446865850LL;
short var_16 = (short)-12219;
int zero = 0;
long long int var_17 = -4434677039226200748LL;
short var_18 = (short)-32636;
unsigned short var_19 = (unsigned short)50403;
int var_20 = -577086476;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
