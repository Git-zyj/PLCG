#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2679371814U;
int var_3 = 1473036988;
unsigned short var_4 = (unsigned short)7440;
long long int var_5 = -6940453745256255317LL;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 1941398732U;
unsigned long long int var_13 = 9918888288170285690ULL;
unsigned int var_14 = 2188281480U;
unsigned int var_17 = 301419792U;
int zero = 0;
unsigned long long int var_18 = 12302043066134838610ULL;
short var_19 = (short)-12795;
unsigned long long int var_20 = 14151312212916416088ULL;
unsigned short var_21 = (unsigned short)43839;
unsigned long long int var_22 = 10836385261889491666ULL;
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
