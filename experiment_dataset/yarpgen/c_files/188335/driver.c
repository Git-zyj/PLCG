#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -247469855953662289LL;
unsigned char var_12 = (unsigned char)38;
int zero = 0;
long long int var_19 = -7395408102250528432LL;
unsigned int var_20 = 77185959U;
long long int var_21 = 6101716860144890342LL;
unsigned int var_22 = 1731095224U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
