#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned int var_10 = 218546181U;
int var_11 = 1323242702;
unsigned long long int var_13 = 12597042631259651297ULL;
long long int var_14 = -1540394674621303637LL;
int zero = 0;
long long int var_15 = 413623000638576550LL;
long long int var_16 = 1793179703874613512LL;
unsigned long long int var_17 = 8641615022642930559ULL;
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
