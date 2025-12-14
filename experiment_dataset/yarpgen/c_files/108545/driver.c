#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43379;
unsigned int var_1 = 2256906443U;
unsigned long long int var_2 = 4357272643575805515ULL;
unsigned short var_3 = (unsigned short)33433;
signed char var_4 = (signed char)36;
unsigned int var_7 = 3350549303U;
unsigned long long int var_8 = 14995074653300581351ULL;
unsigned short var_10 = (unsigned short)20200;
unsigned char var_11 = (unsigned char)136;
unsigned int var_13 = 1793465539U;
unsigned char var_14 = (unsigned char)20;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 849545872U;
unsigned char var_18 = (unsigned char)116;
long long int var_19 = -1890789910790045494LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
