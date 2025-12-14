#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1250247182;
unsigned char var_1 = (unsigned char)84;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)104;
long long int var_11 = 4202938486196990003LL;
int zero = 0;
int var_12 = 1569244168;
int var_13 = 32984229;
long long int var_14 = -9174840251339836935LL;
int var_15 = -6655812;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
