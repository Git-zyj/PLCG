#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 3538833267497937599ULL;
unsigned short var_4 = (unsigned short)14992;
signed char var_7 = (signed char)-22;
unsigned short var_8 = (unsigned short)10374;
unsigned long long int var_9 = 971684178543870873ULL;
int zero = 0;
unsigned int var_13 = 488390605U;
unsigned long long int var_14 = 14588787407048298972ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
