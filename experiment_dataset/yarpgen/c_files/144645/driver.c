#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)10665;
unsigned int var_10 = 244873803U;
unsigned int var_11 = 2860102133U;
signed char var_14 = (signed char)0;
int zero = 0;
signed char var_16 = (signed char)-27;
_Bool var_17 = (_Bool)1;
int var_18 = -16633110;
unsigned int var_19 = 384478261U;
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
