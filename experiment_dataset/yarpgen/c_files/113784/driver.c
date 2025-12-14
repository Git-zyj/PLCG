#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1264164014U;
unsigned long long int var_2 = 14868307073853803816ULL;
unsigned char var_8 = (unsigned char)143;
unsigned char var_9 = (unsigned char)95;
short var_10 = (short)9045;
unsigned char var_14 = (unsigned char)12;
int zero = 0;
unsigned short var_16 = (unsigned short)32734;
int var_17 = -2055325682;
long long int var_18 = 6646460198490320969LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = -4172720037057689816LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
