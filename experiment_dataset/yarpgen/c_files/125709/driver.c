#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6108296747925249822LL;
long long int var_4 = 1993525160122607247LL;
int var_5 = 991802123;
long long int var_8 = -2319982828181982115LL;
unsigned char var_9 = (unsigned char)185;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = 1163835435;
unsigned char var_14 = (unsigned char)210;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2610681637U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
