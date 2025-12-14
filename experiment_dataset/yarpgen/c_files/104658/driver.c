#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18415732453919939869ULL;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-12979;
unsigned int var_3 = 196980257U;
unsigned int var_4 = 3712447210U;
unsigned short var_6 = (unsigned short)21747;
unsigned int var_7 = 3985191567U;
int var_10 = 1106074527;
int zero = 0;
int var_12 = -728394855;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3436875632U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
