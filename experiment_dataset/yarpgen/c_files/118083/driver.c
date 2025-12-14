#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6446992033655296891LL;
unsigned long long int var_10 = 10406049355381683809ULL;
unsigned char var_12 = (unsigned char)25;
_Bool var_13 = (_Bool)1;
long long int var_16 = -1806442238435425875LL;
int zero = 0;
signed char var_17 = (signed char)44;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
