#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)76;
long long int var_1 = -4297499970105229872LL;
unsigned int var_2 = 626665410U;
_Bool var_4 = (_Bool)1;
int var_5 = 2033650246;
signed char var_7 = (signed char)53;
short var_10 = (short)-462;
short var_11 = (short)29181;
long long int var_12 = 8912240483705544767LL;
_Bool var_13 = (_Bool)1;
int var_14 = -1557425660;
unsigned long long int var_15 = 7969824616277498674ULL;
unsigned int var_18 = 2782608309U;
int zero = 0;
unsigned short var_19 = (unsigned short)31992;
long long int var_20 = 2911701879984401904LL;
int var_21 = -854726194;
int var_22 = -510092157;
int var_23 = 187911372;
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
