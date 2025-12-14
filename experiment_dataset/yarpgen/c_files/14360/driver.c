#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36038;
unsigned short var_4 = (unsigned short)61248;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)40636;
int var_8 = 444688;
unsigned long long int var_17 = 4413501585761413586ULL;
int zero = 0;
short var_19 = (short)5050;
unsigned int var_20 = 115011635U;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
