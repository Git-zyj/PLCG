#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 819799476084845940LL;
long long int var_4 = -3788425851241695004LL;
unsigned short var_5 = (unsigned short)65449;
int var_7 = 2082539686;
_Bool var_8 = (_Bool)0;
unsigned long long int var_12 = 10071480441266911093ULL;
unsigned char var_18 = (unsigned char)127;
int zero = 0;
int var_19 = 943410928;
unsigned int var_20 = 2901676990U;
void init() {
}

void checksum() {
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
