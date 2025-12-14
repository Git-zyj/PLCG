#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)55;
unsigned int var_6 = 771169259U;
_Bool var_7 = (_Bool)1;
unsigned char var_12 = (unsigned char)48;
long long int var_17 = -1270668024717794703LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -2312515613637813926LL;
unsigned int var_21 = 1828579921U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
