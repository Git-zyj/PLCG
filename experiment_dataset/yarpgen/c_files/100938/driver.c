#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2292491682U;
unsigned short var_2 = (unsigned short)45072;
_Bool var_3 = (_Bool)1;
short var_7 = (short)31497;
int var_9 = -437663536;
unsigned short var_10 = (unsigned short)9074;
int zero = 0;
unsigned short var_12 = (unsigned short)17508;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)56422;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
