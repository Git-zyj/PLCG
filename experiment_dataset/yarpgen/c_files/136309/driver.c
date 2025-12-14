#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26918;
signed char var_10 = (signed char)-25;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 2415267436U;
unsigned short var_20 = (unsigned short)53678;
unsigned int var_21 = 2596377695U;
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
