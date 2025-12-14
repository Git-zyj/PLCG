#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4642596963174268173ULL;
short var_1 = (short)-2300;
signed char var_2 = (signed char)18;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-4488;
signed char var_5 = (signed char)2;
unsigned long long int var_6 = 2484265461131166096ULL;
int var_7 = -2070967552;
signed char var_8 = (signed char)73;
long long int var_9 = -8260944909402330044LL;
long long int var_11 = 6275824816648666469LL;
short var_12 = (short)-12015;
int zero = 0;
long long int var_15 = 7768943551795791451LL;
long long int var_16 = -5795177532622350544LL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-115;
long long int var_19 = -881023622609535619LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
