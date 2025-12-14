#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3231868914581530760LL;
long long int var_2 = -948010201875267054LL;
_Bool var_3 = (_Bool)1;
unsigned short var_8 = (unsigned short)21453;
long long int var_10 = 3684415736518779431LL;
int zero = 0;
long long int var_14 = 4626315957402134566LL;
_Bool var_15 = (_Bool)0;
int var_16 = 942918219;
unsigned int var_17 = 954454213U;
long long int var_18 = -8226959417473674710LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
