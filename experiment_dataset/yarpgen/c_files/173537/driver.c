#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5876362226921104735LL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)17772;
unsigned int var_11 = 715516137U;
int var_12 = 1294707482;
int var_14 = -1649977807;
unsigned long long int var_16 = 4616252667220595032ULL;
int zero = 0;
short var_20 = (short)18196;
unsigned int var_21 = 193293636U;
void init() {
}

void checksum() {
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
