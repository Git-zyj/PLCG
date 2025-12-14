#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3210414874042223505LL;
unsigned long long int var_1 = 3863603442224216155ULL;
int var_7 = 1142206282;
unsigned char var_11 = (unsigned char)84;
long long int var_12 = -5845185140008096135LL;
signed char var_14 = (signed char)-47;
unsigned long long int var_15 = 5803396456638403625ULL;
int zero = 0;
unsigned int var_16 = 1468842164U;
unsigned int var_17 = 3754409855U;
long long int var_18 = 8664946007619494236LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
