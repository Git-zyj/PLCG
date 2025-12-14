#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4211;
long long int var_4 = -125695264951744644LL;
unsigned char var_18 = (unsigned char)204;
int zero = 0;
unsigned char var_20 = (unsigned char)62;
unsigned char var_21 = (unsigned char)247;
unsigned long long int var_22 = 5521322873972910907ULL;
signed char var_23 = (signed char)14;
signed char var_24 = (signed char)-111;
unsigned long long int var_25 = 10081079431214968367ULL;
unsigned int var_26 = 3156965529U;
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
