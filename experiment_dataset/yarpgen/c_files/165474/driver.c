#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1034524342U;
long long int var_4 = 4407299981379040984LL;
unsigned long long int var_9 = 9280141800828862152ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1965702947U;
signed char var_12 = (signed char)75;
int var_13 = 1679163241;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
