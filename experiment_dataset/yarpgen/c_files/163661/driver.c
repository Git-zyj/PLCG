#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3404330406919183910ULL;
int var_4 = 789229862;
short var_7 = (short)28035;
int var_8 = -1285466161;
unsigned long long int var_10 = 7752104438920504545ULL;
short var_12 = (short)-17443;
int var_13 = -1806561577;
signed char var_14 = (signed char)110;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)57386;
unsigned short var_18 = (unsigned short)47520;
unsigned short var_19 = (unsigned short)6131;
signed char var_20 = (signed char)7;
unsigned short var_21 = (unsigned short)11199;
unsigned long long int var_22 = 10507592545306693555ULL;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)94;
long long int var_25 = 4658647021934394288LL;
short var_26 = (short)26771;
signed char var_27 = (signed char)56;
int var_28 = 767320723;
short var_29 = (short)27162;
short var_30 = (short)-24699;
long long int var_31 = -2273047576630200118LL;
_Bool arr_0 [24] [24] ;
unsigned long long int arr_1 [24] ;
unsigned int arr_6 [10] [10] ;
int arr_9 [10] [10] [10] ;
short arr_10 [10] [10] [10] ;
unsigned int arr_14 [15] ;
short arr_15 [15] [15] ;
short arr_2 [24] ;
_Bool arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 13569947615538921202ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 886846284U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -364244416;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)8746;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 822976082U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-12535;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)1428;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
