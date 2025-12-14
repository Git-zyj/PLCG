#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)19900;
unsigned char var_5 = (unsigned char)71;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)130;
unsigned long long int var_9 = 696923396963732614ULL;
unsigned int var_10 = 3710418819U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2586805692U;
int zero = 0;
unsigned short var_14 = (unsigned short)58341;
int var_15 = 1423306950;
long long int var_16 = -2656074646336516737LL;
void init() {
}

void checksum() {
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
