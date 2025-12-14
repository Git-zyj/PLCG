#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -316648870273128073LL;
_Bool var_4 = (_Bool)1;
signed char var_9 = (signed char)-56;
_Bool var_12 = (_Bool)0;
unsigned int var_15 = 2789191523U;
unsigned short var_16 = (unsigned short)65283;
short var_17 = (short)-5535;
unsigned long long int var_18 = 8469355056004190065ULL;
int zero = 0;
long long int var_19 = 1911031760475165037LL;
unsigned long long int var_20 = 10168427894855002863ULL;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)8;
unsigned long long int var_23 = 9908984650194944252ULL;
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
