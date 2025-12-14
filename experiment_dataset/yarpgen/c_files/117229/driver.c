#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2312573346U;
short var_7 = (short)21068;
short var_14 = (short)18034;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 1189777400;
unsigned char var_20 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
