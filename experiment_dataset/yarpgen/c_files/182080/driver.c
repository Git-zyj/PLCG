#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-6175;
_Bool var_2 = (_Bool)1;
unsigned short var_7 = (unsigned short)9542;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)191;
unsigned int var_14 = 1452295357U;
unsigned short var_15 = (unsigned short)41014;
unsigned int var_16 = 31025644U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
