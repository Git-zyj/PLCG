#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 490453215;
unsigned short var_6 = (unsigned short)28478;
unsigned int var_8 = 2479036813U;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 13850136651520414651ULL;
long long int var_13 = 1405051351374193025LL;
int zero = 0;
int var_15 = 762771082;
unsigned char var_16 = (unsigned char)87;
long long int var_17 = 7611369827751935261LL;
long long int var_18 = -8901169860876910833LL;
void init() {
}

void checksum() {
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
