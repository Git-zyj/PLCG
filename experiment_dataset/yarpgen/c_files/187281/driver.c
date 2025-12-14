#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -706617978;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)57130;
unsigned char var_4 = (unsigned char)54;
_Bool var_5 = (_Bool)1;
short var_6 = (short)26370;
int var_10 = 1338560649;
unsigned long long int var_11 = 6426076314202806731ULL;
short var_12 = (short)14115;
unsigned int var_13 = 3187034951U;
int zero = 0;
long long int var_14 = 7810059508560097252LL;
long long int var_15 = -3318354714963594782LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
