#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 4208120036082261977ULL;
unsigned long long int var_3 = 1163585935200379040ULL;
unsigned char var_5 = (unsigned char)51;
long long int var_8 = -6624728368216673273LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_13 = -8596815284068153630LL;
unsigned long long int var_14 = 2207080346785215745ULL;
void init() {
}

void checksum() {
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
