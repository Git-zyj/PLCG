#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1813969943;
short var_2 = (short)-12569;
long long int var_4 = -4288866947851723864LL;
_Bool var_8 = (_Bool)1;
short var_10 = (short)15236;
long long int var_13 = 5215800587534817997LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_20 = (short)4949;
unsigned int var_21 = 1622892055U;
signed char var_22 = (signed char)8;
unsigned short var_23 = (unsigned short)53846;
unsigned long long int var_24 = 17164989385853290369ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
