#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1576863614;
long long int var_9 = -8763542530323983156LL;
unsigned int var_12 = 1526626419U;
int zero = 0;
int var_15 = -418537448;
unsigned short var_16 = (unsigned short)10594;
unsigned long long int var_17 = 6937682182813635831ULL;
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
