#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1883786049U;
unsigned short var_2 = (unsigned short)23571;
short var_3 = (short)-7997;
unsigned long long int var_9 = 13696026423450018728ULL;
unsigned long long int var_12 = 11406624825204941569ULL;
int zero = 0;
unsigned long long int var_13 = 2431220900264146743ULL;
unsigned short var_14 = (unsigned short)22534;
unsigned long long int var_15 = 2538339804284459520ULL;
unsigned short var_16 = (unsigned short)52546;
void init() {
}

void checksum() {
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
