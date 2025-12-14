#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 3036126093U;
unsigned int var_5 = 3668409687U;
_Bool var_6 = (_Bool)1;
long long int var_8 = -4811158115988960301LL;
unsigned long long int var_9 = 11667829881299834468ULL;
int var_10 = -744410909;
unsigned long long int var_11 = 13864233935046643097ULL;
unsigned short var_12 = (unsigned short)14785;
unsigned short var_14 = (unsigned short)47857;
unsigned long long int var_16 = 11196950797291315390ULL;
_Bool var_17 = (_Bool)0;
int var_18 = -98607583;
int zero = 0;
int var_19 = 856774831;
unsigned int var_20 = 2809719707U;
unsigned long long int var_21 = 13920078159767714569ULL;
long long int var_22 = -4612388217553173165LL;
void init() {
}

void checksum() {
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
