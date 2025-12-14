#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)59;
long long int var_16 = -6427139409282255059LL;
unsigned char var_17 = (unsigned char)6;
int zero = 0;
long long int var_18 = 7730006827149320090LL;
unsigned int var_19 = 2303729354U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
