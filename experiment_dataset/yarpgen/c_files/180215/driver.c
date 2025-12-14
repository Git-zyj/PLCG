#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24363;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)122;
unsigned int var_11 = 648903930U;
unsigned long long int var_12 = 13184654407903256889ULL;
unsigned short var_13 = (unsigned short)15663;
int zero = 0;
signed char var_16 = (signed char)-17;
_Bool var_17 = (_Bool)1;
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
