#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5779590592847303087LL;
long long int var_4 = -9005079053871623966LL;
short var_6 = (short)30719;
short var_7 = (short)-21528;
long long int var_12 = -5342083068497852647LL;
unsigned short var_14 = (unsigned short)23453;
signed char var_15 = (signed char)-123;
unsigned int var_17 = 3672790030U;
int zero = 0;
unsigned int var_19 = 1480807920U;
unsigned long long int var_20 = 15753229333096686881ULL;
int var_21 = 439568160;
unsigned long long int var_22 = 6098344394831142665ULL;
short var_23 = (short)-217;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
