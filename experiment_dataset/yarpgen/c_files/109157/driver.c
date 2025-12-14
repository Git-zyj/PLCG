#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-89;
unsigned char var_5 = (unsigned char)214;
unsigned long long int var_12 = 11686741026219165765ULL;
short var_13 = (short)-23;
short var_15 = (short)4745;
unsigned long long int var_17 = 13339499368653496641ULL;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-36;
signed char var_21 = (signed char)-50;
int var_22 = 96215325;
long long int var_23 = 7701571705746952391LL;
unsigned char var_24 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
