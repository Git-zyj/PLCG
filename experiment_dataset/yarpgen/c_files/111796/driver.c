#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -498968408;
unsigned int var_3 = 3321878868U;
int var_4 = -2119260894;
unsigned int var_5 = 1124576192U;
signed char var_6 = (signed char)-28;
unsigned short var_7 = (unsigned short)3743;
int var_9 = 1832921440;
unsigned short var_10 = (unsigned short)47951;
int var_11 = 136481585;
unsigned int var_12 = 3332200534U;
int zero = 0;
signed char var_13 = (signed char)-89;
unsigned int var_14 = 2489318765U;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)50;
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
