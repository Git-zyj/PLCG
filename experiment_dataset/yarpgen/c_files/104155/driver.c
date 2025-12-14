#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1145757183;
unsigned char var_1 = (unsigned char)74;
long long int var_2 = 7342098670073380248LL;
unsigned short var_3 = (unsigned short)64840;
short var_4 = (short)11576;
short var_5 = (short)-22909;
long long int var_6 = 4415801762362206809LL;
unsigned long long int var_7 = 17598473230637131515ULL;
unsigned long long int var_8 = 480268238672670290ULL;
signed char var_9 = (signed char)11;
int zero = 0;
long long int var_10 = -3521136003892235933LL;
long long int var_11 = -7944868680788682935LL;
long long int var_12 = 5954606865251136237LL;
unsigned char var_13 = (unsigned char)154;
long long int var_14 = 4679952755678135230LL;
unsigned char var_15 = (unsigned char)92;
unsigned int var_16 = 3290785162U;
int var_17 = -645859681;
long long int var_18 = -3054388640335440258LL;
short var_19 = (short)-11032;
long long int arr_3 [22] ;
int arr_4 [22] ;
long long int arr_9 [19] ;
long long int arr_10 [19] [19] ;
unsigned char arr_11 [19] [19] ;
long long int arr_20 [23] [23] ;
int arr_21 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -4974614322227979369LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 637810784;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -4327767270436136794LL : -1902851762961449551LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? -3658227924951862644LL : -8313568696090725551LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)69 : (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? -4402853188649355897LL : 7150015975395284543LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? -1218280064 : -77109945;
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
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
