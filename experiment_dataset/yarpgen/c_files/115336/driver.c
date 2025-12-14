#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_6 = -1869133048742145442LL;
unsigned char var_7 = (unsigned char)182;
int var_8 = 1545364900;
long long int var_13 = -1742997624202794185LL;
int zero = 0;
int var_19 = -1220038773;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 13995487U;
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
