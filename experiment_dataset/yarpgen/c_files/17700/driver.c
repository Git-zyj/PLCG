#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_9 = 8195906556933438025LL;
unsigned char var_12 = (unsigned char)240;
short var_13 = (short)-31608;
unsigned int var_14 = 3804629857U;
short var_16 = (short)26310;
int zero = 0;
unsigned int var_18 = 1064899566U;
unsigned char var_19 = (unsigned char)237;
unsigned short var_20 = (unsigned short)36076;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
