#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
int var_3 = 591107756;
short var_5 = (short)-6289;
signed char var_6 = (signed char)-107;
long long int var_7 = -6944215320071817081LL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_14 = 17760050767262688221ULL;
unsigned int var_15 = 3559435126U;
int var_17 = -2007440582;
int zero = 0;
int var_18 = -2045506648;
unsigned long long int var_19 = 3706717631602390349ULL;
long long int var_20 = 4170266226541512506LL;
long long int var_21 = -6998741079142783262LL;
short var_22 = (short)-23216;
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
