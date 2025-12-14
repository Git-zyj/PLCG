#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17937;
short var_2 = (short)-13646;
unsigned long long int var_4 = 9936554682539844423ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 18057079993445288508ULL;
unsigned int var_16 = 477124376U;
short var_17 = (short)15392;
signed char var_18 = (signed char)5;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
