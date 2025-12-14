#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)157;
signed char var_8 = (signed char)23;
unsigned long long int var_10 = 3803013610091092337ULL;
signed char var_13 = (signed char)-126;
short var_14 = (short)-17765;
unsigned char var_15 = (unsigned char)130;
int zero = 0;
unsigned int var_16 = 3007838476U;
unsigned char var_17 = (unsigned char)229;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
