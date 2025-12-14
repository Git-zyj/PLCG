#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 156884100;
_Bool var_5 = (_Bool)0;
unsigned long long int var_13 = 16350561213164484936ULL;
unsigned char var_14 = (unsigned char)207;
unsigned int var_16 = 2766269995U;
int zero = 0;
unsigned long long int var_20 = 4430289607716539620ULL;
int var_21 = -68263698;
int var_22 = -701933866;
unsigned long long int var_23 = 13931763570241485298ULL;
unsigned char var_24 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
