#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 128015548U;
unsigned int var_8 = 223927186U;
unsigned long long int var_12 = 1241509894117765356ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_15 = -3170719484402694584LL;
long long int var_16 = -5679367628100298940LL;
unsigned int var_17 = 2596171298U;
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
