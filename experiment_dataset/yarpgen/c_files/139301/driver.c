#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -8131959137764523233LL;
unsigned int var_2 = 2656351879U;
int var_5 = 145360112;
signed char var_6 = (signed char)42;
unsigned char var_7 = (unsigned char)176;
unsigned char var_10 = (unsigned char)218;
unsigned char var_11 = (unsigned char)82;
long long int var_12 = -6799605339099084392LL;
unsigned char var_13 = (unsigned char)223;
unsigned short var_14 = (unsigned short)530;
unsigned char var_15 = (unsigned char)242;
int zero = 0;
long long int var_16 = -4420000079317058656LL;
short var_17 = (short)9690;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
