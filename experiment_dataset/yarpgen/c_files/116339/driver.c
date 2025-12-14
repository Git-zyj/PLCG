#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27062;
signed char var_4 = (signed char)72;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 7273924533725104745ULL;
short var_11 = (short)-3921;
signed char var_12 = (signed char)99;
int zero = 0;
unsigned int var_15 = 334908369U;
unsigned long long int var_16 = 2181301486648775670ULL;
void init() {
}

void checksum() {
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
