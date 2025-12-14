#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3783296796U;
unsigned short var_2 = (unsigned short)36510;
int var_4 = -885591839;
int var_5 = 788721887;
unsigned short var_8 = (unsigned short)12527;
int var_10 = 479341951;
int zero = 0;
signed char var_12 = (signed char)17;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
