#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 10959539453799859318ULL;
unsigned int var_13 = 1282890409U;
int var_16 = -1863632557;
int zero = 0;
int var_17 = 1483456413;
unsigned char var_18 = (unsigned char)54;
unsigned long long int var_19 = 1736953173997378554ULL;
_Bool var_20 = (_Bool)1;
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
