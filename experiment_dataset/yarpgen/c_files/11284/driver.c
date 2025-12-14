#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)33394;
long long int var_7 = 5532843498327557776LL;
unsigned short var_8 = (unsigned short)2766;
unsigned short var_10 = (unsigned short)4952;
unsigned char var_11 = (unsigned char)64;
short var_12 = (short)26822;
unsigned int var_15 = 2601258539U;
int zero = 0;
short var_16 = (short)-21562;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
