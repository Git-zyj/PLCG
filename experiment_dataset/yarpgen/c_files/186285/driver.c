#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2124512473U;
_Bool var_7 = (_Bool)0;
unsigned int var_13 = 2611734417U;
int zero = 0;
unsigned short var_17 = (unsigned short)9151;
long long int var_18 = 4657586376840760176LL;
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
