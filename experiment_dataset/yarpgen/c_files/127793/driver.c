#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 15768475664161461883ULL;
signed char var_3 = (signed char)78;
unsigned long long int var_6 = 9782817669622586435ULL;
signed char var_8 = (signed char)78;
int var_10 = -1015331741;
unsigned int var_15 = 2964221912U;
int zero = 0;
long long int var_16 = -5488475170814851302LL;
unsigned int var_17 = 1345406545U;
unsigned short var_18 = (unsigned short)47758;
unsigned long long int var_19 = 7068626620105637710ULL;
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
