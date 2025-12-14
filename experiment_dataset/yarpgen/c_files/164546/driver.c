#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)10146;
short var_6 = (short)-23352;
int var_10 = 1077142020;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-93;
unsigned int var_17 = 4196864152U;
int var_18 = -1193229915;
void init() {
}

void checksum() {
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
