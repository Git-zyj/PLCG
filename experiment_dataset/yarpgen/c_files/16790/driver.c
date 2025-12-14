#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1406704112;
unsigned int var_1 = 2668475058U;
long long int var_4 = -155682789427938340LL;
int var_9 = -2121360057;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)11;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 1481839003399351886LL;
unsigned char var_14 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
