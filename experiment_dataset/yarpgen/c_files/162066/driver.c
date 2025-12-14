#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-78;
long long int var_5 = -6939771224214572824LL;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)24;
int zero = 0;
unsigned long long int var_13 = 18067072758058006917ULL;
unsigned int var_14 = 776535617U;
long long int var_15 = -1061244317225113320LL;
unsigned long long int var_16 = 8312442260990934539ULL;
unsigned char var_17 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
