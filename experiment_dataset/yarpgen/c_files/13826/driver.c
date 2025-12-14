#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59819;
unsigned int var_5 = 1836465503U;
unsigned long long int var_6 = 6959119366952338308ULL;
short var_7 = (short)20629;
unsigned short var_8 = (unsigned short)55293;
unsigned int var_15 = 3865068330U;
int zero = 0;
unsigned short var_20 = (unsigned short)2770;
unsigned short var_21 = (unsigned short)62319;
short var_22 = (short)29395;
long long int var_23 = 3928879868867962474LL;
_Bool var_24 = (_Bool)0;
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
