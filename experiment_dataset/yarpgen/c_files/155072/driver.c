#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5676007241732268406LL;
long long int var_12 = 4625620899233916177LL;
unsigned char var_14 = (unsigned char)224;
unsigned int var_16 = 3980456038U;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -4706734808295485549LL;
unsigned int var_20 = 1108447418U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
