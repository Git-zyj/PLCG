#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
int var_2 = -1321555731;
long long int var_6 = -528729305033128723LL;
unsigned int var_9 = 1219980740U;
int zero = 0;
long long int var_15 = 1720916974956204407LL;
unsigned short var_16 = (unsigned short)61876;
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
