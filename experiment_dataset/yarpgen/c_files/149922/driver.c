#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 302416235U;
short var_1 = (short)-863;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 3567077229812042284ULL;
unsigned long long int var_5 = 3442843556360316932ULL;
int var_6 = 1976893427;
short var_7 = (short)22167;
long long int var_18 = 8559570084089540704LL;
int zero = 0;
int var_19 = 924541307;
long long int var_20 = 7429288132857991806LL;
long long int var_21 = 419850241559223252LL;
int var_22 = -195055067;
_Bool arr_1 [23] ;
_Bool arr_2 [23] [23] ;
short arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)7452;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
