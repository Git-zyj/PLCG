#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 271550426U;
long long int var_2 = 2168315726782543785LL;
unsigned char var_3 = (unsigned char)158;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)83;
int zero = 0;
unsigned int var_10 = 3557154508U;
unsigned int var_11 = 1228258196U;
unsigned int var_12 = 3873614405U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
