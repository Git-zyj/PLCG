#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1056676775;
short var_5 = (short)-14885;
short var_6 = (short)-13945;
unsigned int var_8 = 4141619436U;
_Bool var_11 = (_Bool)1;
unsigned int var_14 = 3162243722U;
unsigned int var_16 = 2723983470U;
int zero = 0;
signed char var_17 = (signed char)12;
short var_18 = (short)-17052;
unsigned int var_19 = 73543422U;
int var_20 = 1403649856;
long long int var_21 = 8990849578854758295LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
