#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43397;
long long int var_12 = -4325358639916120187LL;
unsigned long long int var_14 = 5195073025807189905ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_19 = (short)15693;
unsigned char var_20 = (unsigned char)249;
unsigned char var_21 = (unsigned char)17;
short var_22 = (short)28115;
unsigned short var_23 = (unsigned short)15848;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
