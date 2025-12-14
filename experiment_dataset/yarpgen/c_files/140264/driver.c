#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17842;
int var_2 = -1106673747;
unsigned int var_3 = 1704973848U;
long long int var_6 = 9087083999783517643LL;
unsigned long long int var_7 = 3989105123310689321ULL;
short var_8 = (short)21359;
unsigned short var_9 = (unsigned short)49478;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-15934;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
