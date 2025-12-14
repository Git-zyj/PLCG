#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
short var_1 = (short)7833;
unsigned int var_2 = 947020855U;
short var_5 = (short)1552;
short var_7 = (short)14892;
unsigned char var_8 = (unsigned char)176;
int zero = 0;
short var_10 = (short)-18247;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
