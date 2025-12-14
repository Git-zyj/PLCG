#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)-111;
signed char var_4 = (signed char)-101;
unsigned short var_6 = (unsigned short)27516;
long long int var_7 = -8942398226918853548LL;
unsigned short var_8 = (unsigned short)56675;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_14 = (short)-25453;
unsigned int var_15 = 1095887773U;
short var_16 = (short)8171;
unsigned int var_17 = 3343155404U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
