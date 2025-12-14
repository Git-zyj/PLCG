#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1083785132806968905ULL;
unsigned long long int var_1 = 2463582954510377756ULL;
unsigned long long int var_2 = 16483266712980234810ULL;
unsigned long long int var_3 = 14351184843567472915ULL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 1877162680907684487ULL;
unsigned short var_7 = (unsigned short)25087;
unsigned long long int var_8 = 13847716698531348076ULL;
unsigned long long int var_9 = 11319159035793828448ULL;
unsigned long long int var_10 = 11503788309881377645ULL;
unsigned long long int var_11 = 3790958809398196723ULL;
unsigned long long int var_12 = 17824908723182260541ULL;
unsigned long long int var_13 = 9040942139925471618ULL;
unsigned long long int var_14 = 14021992781860838287ULL;
int zero = 0;
unsigned long long int var_15 = 9921958907169350146ULL;
unsigned long long int var_16 = 18116879259482840807ULL;
unsigned long long int var_17 = 1626582687444022573ULL;
unsigned long long int var_18 = 1959128022092457792ULL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
unsigned short arr_3 [15] ;
_Bool arr_13 [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)30211;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
