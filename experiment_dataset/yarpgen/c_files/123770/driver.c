#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_20 = -9037241976619841838LL;
unsigned long long int var_21 = 10694556132375259571ULL;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)158;
signed char var_24 = (signed char)79;
unsigned short var_25 = (unsigned short)48898;
unsigned char var_26 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
