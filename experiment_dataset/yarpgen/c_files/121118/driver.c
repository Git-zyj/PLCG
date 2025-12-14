#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2583;
unsigned int var_4 = 188011356U;
long long int var_5 = -1272768714918046872LL;
unsigned long long int var_7 = 3048606185628672083ULL;
signed char var_8 = (signed char)89;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-117;
int zero = 0;
unsigned short var_13 = (unsigned short)31406;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1580625824U;
int var_16 = -1549247731;
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
