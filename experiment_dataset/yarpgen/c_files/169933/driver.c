#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1992408333;
signed char var_2 = (signed char)-24;
int var_3 = 1522700694;
unsigned int var_4 = 3123059824U;
int var_5 = 1481374349;
int zero = 0;
short var_10 = (short)-21242;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2869732785U;
short var_13 = (short)-9439;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
