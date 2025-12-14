#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4762354223873991591LL;
unsigned int var_6 = 3254893141U;
unsigned int var_11 = 2025007744U;
int zero = 0;
long long int var_14 = -4128607361140349415LL;
unsigned short var_15 = (unsigned short)3314;
unsigned int var_16 = 2946719452U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
