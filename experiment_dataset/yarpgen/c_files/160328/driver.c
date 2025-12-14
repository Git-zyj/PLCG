#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7509;
unsigned long long int var_1 = 16281731440097829330ULL;
unsigned char var_2 = (unsigned char)246;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3291541128U;
long long int var_6 = -8730654398980276586LL;
unsigned char var_7 = (unsigned char)139;
long long int var_8 = 5417135575723794527LL;
unsigned char var_9 = (unsigned char)147;
long long int var_10 = 1160717240704163939LL;
short var_11 = (short)-26760;
unsigned char var_12 = (unsigned char)33;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)174;
unsigned char var_16 = (unsigned char)96;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 1940421489387771796LL;
void init() {
}

void checksum() {
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
