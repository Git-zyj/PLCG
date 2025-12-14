#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)174;
unsigned long long int var_2 = 17999969535908768476ULL;
int var_3 = -1727238541;
unsigned char var_7 = (unsigned char)41;
unsigned int var_10 = 1337253502U;
signed char var_14 = (signed char)78;
unsigned char var_16 = (unsigned char)127;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 3580829190U;
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
