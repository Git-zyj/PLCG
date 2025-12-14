#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1964141974435444703ULL;
unsigned short var_2 = (unsigned short)9830;
unsigned int var_7 = 385632902U;
int zero = 0;
unsigned long long int var_19 = 9267629874868094811ULL;
_Bool var_20 = (_Bool)0;
int var_21 = -2103361975;
void init() {
}

void checksum() {
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
