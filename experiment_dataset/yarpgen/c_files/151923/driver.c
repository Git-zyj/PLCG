#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -466724480;
long long int var_1 = -7595106365841068004LL;
unsigned char var_3 = (unsigned char)224;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)250;
long long int var_13 = 6212896480544860293LL;
unsigned long long int var_14 = 4255863883247770247ULL;
signed char var_17 = (signed char)56;
int zero = 0;
int var_18 = 943017884;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)230;
unsigned int var_21 = 3559494517U;
long long int var_22 = 6666145740541388746LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
