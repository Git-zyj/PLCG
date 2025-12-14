#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)8;
unsigned int var_11 = 4177409691U;
long long int var_14 = 1684417919015995712LL;
int zero = 0;
unsigned char var_16 = (unsigned char)112;
_Bool var_17 = (_Bool)1;
int var_18 = 600391345;
int var_19 = -680669153;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
