#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)48260;
unsigned int var_7 = 2896997419U;
long long int var_12 = -59207850447832386LL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 488896004U;
int var_15 = 1654536057;
unsigned int var_17 = 4107403370U;
int zero = 0;
long long int var_18 = 8992587587799777311LL;
long long int var_19 = -5595546160182048787LL;
long long int var_20 = -5528379709103764792LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
