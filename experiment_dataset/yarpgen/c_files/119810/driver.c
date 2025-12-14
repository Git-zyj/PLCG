#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1458881432U;
_Bool var_4 = (_Bool)1;
unsigned int var_10 = 1617082802U;
long long int var_12 = -742651324484631457LL;
int zero = 0;
signed char var_15 = (signed char)-83;
unsigned int var_16 = 3464301636U;
unsigned int var_17 = 2833591709U;
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
