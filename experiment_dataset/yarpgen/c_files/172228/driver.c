#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)5567;
signed char var_3 = (signed char)121;
unsigned long long int var_5 = 8998511229414428544ULL;
short var_6 = (short)9052;
signed char var_7 = (signed char)59;
short var_8 = (short)-13934;
short var_10 = (short)5886;
int var_11 = 940294705;
short var_13 = (short)12408;
unsigned short var_14 = (unsigned short)57298;
signed char var_15 = (signed char)-89;
unsigned long long int var_16 = 14059742315165299936ULL;
unsigned short var_17 = (unsigned short)4658;
int zero = 0;
short var_18 = (short)6274;
_Bool var_19 = (_Bool)1;
int var_20 = -1780462522;
unsigned int var_21 = 2902313633U;
short var_22 = (short)-12430;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
