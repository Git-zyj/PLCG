#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned char var_12 = (unsigned char)160;
unsigned int var_15 = 335047123U;
int var_17 = -1135446935;
int zero = 0;
unsigned long long int var_18 = 17221234133348308131ULL;
int var_19 = -2122165930;
_Bool var_20 = (_Bool)0;
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
