#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21892;
short var_1 = (short)28098;
short var_2 = (short)20330;
long long int var_5 = 5008828271908216579LL;
short var_9 = (short)-21103;
unsigned int var_14 = 1620137792U;
_Bool var_15 = (_Bool)1;
unsigned int var_17 = 559286456U;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -252177903;
unsigned short var_22 = (unsigned short)35162;
void init() {
}

void checksum() {
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
