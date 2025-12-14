#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9831;
int var_3 = 1458593144;
long long int var_5 = 3688287103641449047LL;
unsigned short var_6 = (unsigned short)58536;
int var_8 = 170035595;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_14 = (short)32373;
signed char var_15 = (signed char)88;
long long int var_16 = -218089566744625881LL;
void init() {
}

void checksum() {
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
