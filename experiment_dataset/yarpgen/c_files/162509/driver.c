#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42850;
unsigned short var_4 = (unsigned short)54947;
unsigned short var_6 = (unsigned short)65061;
int zero = 0;
int var_12 = 674708966;
long long int var_13 = -1936124774896207194LL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)23;
unsigned short var_16 = (unsigned short)9022;
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
