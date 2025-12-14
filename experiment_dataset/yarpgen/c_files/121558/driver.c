#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23931;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 643746365U;
unsigned long long int var_10 = 8200866656878851903ULL;
unsigned long long int var_14 = 10418697777642768078ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)9;
unsigned short var_17 = (unsigned short)36085;
unsigned short var_18 = (unsigned short)15181;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
