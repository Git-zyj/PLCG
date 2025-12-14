#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1526563210;
unsigned char var_7 = (unsigned char)221;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_15 = 4062172928676364533LL;
long long int var_16 = 1625785706523575448LL;
unsigned short var_17 = (unsigned short)14976;
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
