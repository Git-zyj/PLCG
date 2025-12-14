#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -585292396;
short var_2 = (short)17838;
short var_3 = (short)857;
long long int var_4 = -2233657219478272658LL;
short var_11 = (short)-1095;
signed char var_12 = (signed char)-61;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)70;
int zero = 0;
long long int var_16 = -5224390125073166782LL;
short var_17 = (short)-19026;
signed char var_18 = (signed char)-35;
int var_19 = 1312995094;
long long int var_20 = -872457947461245453LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
