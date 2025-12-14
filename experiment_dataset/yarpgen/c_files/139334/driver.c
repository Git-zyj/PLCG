#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -14586864;
unsigned int var_1 = 697265255U;
long long int var_7 = 5370887707428354445LL;
int zero = 0;
unsigned char var_11 = (unsigned char)177;
unsigned long long int var_12 = 2719757328292439403ULL;
signed char var_13 = (signed char)37;
unsigned char var_14 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
