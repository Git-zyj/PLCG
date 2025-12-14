#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 788092024;
unsigned int var_2 = 1825725581U;
long long int var_3 = -7606522654791621108LL;
signed char var_4 = (signed char)-92;
int var_5 = 1219315895;
int var_6 = 379264150;
signed char var_7 = (signed char)-57;
unsigned long long int var_8 = 4579586368548535282ULL;
short var_9 = (short)3633;
int zero = 0;
long long int var_10 = -3389501358735744635LL;
unsigned short var_11 = (unsigned short)56690;
_Bool var_12 = (_Bool)1;
int var_13 = -274845859;
short var_14 = (short)-16578;
long long int var_15 = 7308391373856246383LL;
long long int var_16 = 3842489618591022830LL;
int var_17 = 1633851763;
int arr_20 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = -948275780;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
