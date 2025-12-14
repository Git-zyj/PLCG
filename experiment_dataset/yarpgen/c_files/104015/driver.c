#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 639694411U;
long long int var_2 = -1787100958831026282LL;
unsigned int var_3 = 1171024218U;
unsigned int var_4 = 3897240076U;
unsigned char var_6 = (unsigned char)241;
short var_7 = (short)-4559;
unsigned long long int var_8 = 7143343495017977116ULL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int var_13 = -1682911294;
int zero = 0;
unsigned long long int var_14 = 278628828395206052ULL;
long long int var_15 = -8005574178925224839LL;
long long int var_16 = 5818681478515212783LL;
unsigned short var_17 = (unsigned short)38620;
int var_18 = 363583735;
long long int var_19 = 1883859863974176234LL;
unsigned long long int var_20 = 2204232556032003565ULL;
long long int var_21 = -2596569072932634929LL;
_Bool var_22 = (_Bool)0;
unsigned short arr_0 [23] [23] ;
long long int arr_2 [23] [23] [23] ;
signed char arr_3 [23] [23] ;
unsigned int arr_4 [23] [23] [23] ;
unsigned short arr_5 [23] ;
unsigned long long int arr_7 [14] ;
int arr_8 [14] ;
signed char arr_6 [23] [23] [23] ;
unsigned char arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)59881;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -3725995168717277760LL : -7469612147880831573LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)36 : (signed char)-38;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2736248094U : 4274129338U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)14418;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 15860772428053797645ULL : 3725181735651571401ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -1851155349 : -1917991118;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)63 : (signed char)-101;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)174 : (unsigned char)63;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
