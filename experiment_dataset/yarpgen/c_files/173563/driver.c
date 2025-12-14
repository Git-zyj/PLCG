#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 282016407;
int var_2 = 2096434181;
unsigned int var_10 = 3524378030U;
unsigned char var_12 = (unsigned char)22;
unsigned char var_13 = (unsigned char)156;
int zero = 0;
int var_14 = 214862119;
_Bool var_15 = (_Bool)1;
long long int var_16 = -3742867302327191206LL;
unsigned char var_17 = (unsigned char)160;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
