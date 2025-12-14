#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)183;
unsigned char var_2 = (unsigned char)225;
unsigned char var_3 = (unsigned char)176;
unsigned char var_6 = (unsigned char)220;
unsigned short var_7 = (unsigned short)47107;
unsigned int var_8 = 2842314536U;
long long int var_9 = 518335418451659801LL;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)229;
unsigned short var_12 = (unsigned short)37096;
unsigned short var_13 = (unsigned short)65311;
int zero = 0;
unsigned short var_15 = (unsigned short)54966;
unsigned short var_16 = (unsigned short)32158;
unsigned short var_17 = (unsigned short)48824;
long long int var_18 = -95862933502864816LL;
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
