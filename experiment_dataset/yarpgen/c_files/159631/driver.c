#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2901476429178551440LL;
int var_5 = -1788472238;
_Bool var_13 = (_Bool)1;
int var_15 = 662044944;
int zero = 0;
signed char var_18 = (signed char)-15;
int var_19 = 1525603396;
unsigned long long int var_20 = 9576126088036817096ULL;
void init() {
}

void checksum() {
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
