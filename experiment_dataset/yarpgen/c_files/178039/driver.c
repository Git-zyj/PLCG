#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42023;
unsigned long long int var_3 = 10943110346423653391ULL;
unsigned long long int var_6 = 8399566417163766343ULL;
unsigned long long int var_7 = 1621902560735415227ULL;
unsigned long long int var_9 = 1716205779176978784ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)21961;
unsigned int var_13 = 520735942U;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 4071354271U;
unsigned short var_19 = (unsigned short)29183;
int zero = 0;
unsigned int var_20 = 907261369U;
unsigned long long int var_21 = 5184036332609794787ULL;
short var_22 = (short)24773;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
