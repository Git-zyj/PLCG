#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 174770428;
long long int var_4 = 5583737257441653323LL;
unsigned int var_6 = 2599974696U;
short var_8 = (short)29196;
int zero = 0;
int var_10 = 1623533852;
short var_11 = (short)-4578;
signed char var_12 = (signed char)-83;
unsigned int var_13 = 204575604U;
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
