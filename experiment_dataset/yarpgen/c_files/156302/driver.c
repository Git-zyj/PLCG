#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-119;
long long int var_3 = 2346385311623870581LL;
int var_5 = -1239771969;
unsigned int var_6 = 3078210787U;
short var_7 = (short)-27479;
unsigned short var_9 = (unsigned short)60444;
int zero = 0;
unsigned short var_12 = (unsigned short)11194;
unsigned int var_13 = 1167021700U;
unsigned short var_14 = (unsigned short)5193;
unsigned short var_15 = (unsigned short)56009;
unsigned char var_16 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
