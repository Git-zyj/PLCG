#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6134103513359201649LL;
unsigned long long int var_4 = 6564430125425908994ULL;
int var_5 = -1234993889;
short var_7 = (short)-25603;
unsigned long long int var_12 = 4305096323025042999ULL;
_Bool var_13 = (_Bool)1;
short var_16 = (short)-7746;
int zero = 0;
signed char var_17 = (signed char)-3;
unsigned long long int var_18 = 785331582862696290ULL;
short var_19 = (short)2963;
short var_20 = (short)-14841;
unsigned long long int var_21 = 5274447728666723487ULL;
signed char arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)33;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
