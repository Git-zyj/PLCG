#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 8816896569712386710LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_16 = 12704934338812833574ULL;
int zero = 0;
long long int var_17 = -2970241654816639547LL;
unsigned long long int var_18 = 7625719817244352710ULL;
unsigned long long int var_19 = 533354527894340823ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
