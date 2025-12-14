#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-57;
long long int var_4 = -8036060947922247359LL;
unsigned short var_7 = (unsigned short)4772;
unsigned long long int var_9 = 15487105965739598975ULL;
unsigned long long int var_10 = 112154289393376253ULL;
unsigned char var_13 = (unsigned char)240;
unsigned char var_14 = (unsigned char)131;
unsigned short var_16 = (unsigned short)21951;
int zero = 0;
long long int var_17 = 3864768655193199881LL;
long long int var_18 = -1180165865143104064LL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2920844600U;
void init() {
}

void checksum() {
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
