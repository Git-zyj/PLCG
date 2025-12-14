#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)195;
long long int var_3 = -3122682224298813644LL;
short var_5 = (short)16363;
int var_7 = -502284480;
unsigned int var_8 = 827007853U;
unsigned int var_10 = 402769761U;
_Bool var_12 = (_Bool)1;
int var_13 = 1705694912;
unsigned char var_14 = (unsigned char)173;
long long int var_16 = 7229084183770746017LL;
unsigned long long int var_17 = 3821099909521236507ULL;
unsigned int var_18 = 1120484095U;
int zero = 0;
unsigned char var_19 = (unsigned char)47;
long long int var_20 = 2302856586119278810LL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
