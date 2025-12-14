#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14125092040165971166ULL;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)9;
unsigned long long int var_4 = 16864750209967912785ULL;
unsigned int var_5 = 561508612U;
long long int var_8 = -8604412152076704071LL;
short var_10 = (short)62;
unsigned int var_11 = 3216821260U;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)51770;
short var_14 = (short)20259;
long long int var_16 = -1520570267280002062LL;
int zero = 0;
unsigned int var_17 = 3235843557U;
unsigned char var_18 = (unsigned char)165;
unsigned int var_19 = 642576215U;
short var_20 = (short)19681;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
