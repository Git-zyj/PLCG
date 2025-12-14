#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5626;
unsigned short var_1 = (unsigned short)58969;
unsigned char var_2 = (unsigned char)206;
unsigned char var_5 = (unsigned char)64;
unsigned long long int var_7 = 14116190748641928767ULL;
short var_8 = (short)573;
unsigned short var_10 = (unsigned short)32458;
long long int var_12 = -5173875779458162892LL;
short var_13 = (short)30375;
unsigned long long int var_14 = 7298013653993772318ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)-4848;
short var_17 = (short)11624;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 13123121695642554129ULL;
short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)2027;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
