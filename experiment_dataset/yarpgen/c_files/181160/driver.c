#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned char var_12 = (unsigned char)45;
long long int var_13 = 1264391312228093136LL;
unsigned short var_14 = (unsigned short)36931;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int var_19 = 1741383397;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)163;
int var_22 = 402210494;
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
