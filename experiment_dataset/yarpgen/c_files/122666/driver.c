#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_12 = (signed char)71;
unsigned char var_16 = (unsigned char)51;
int var_18 = 1355977887;
int zero = 0;
short var_20 = (short)-25283;
_Bool var_21 = (_Bool)1;
int var_22 = -1138417403;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
