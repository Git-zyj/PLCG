#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7611;
unsigned int var_1 = 2325691864U;
signed char var_2 = (signed char)-125;
long long int var_3 = 5258139085303819699LL;
long long int var_4 = 875587864648714138LL;
unsigned long long int var_6 = 5454587826028643952ULL;
unsigned int var_9 = 545284353U;
unsigned long long int var_10 = 7381825480006205131ULL;
signed char var_11 = (signed char)6;
unsigned long long int var_12 = 5911400193057389779ULL;
unsigned long long int var_13 = 6600737242529528919ULL;
short var_14 = (short)13693;
short var_15 = (short)-3338;
signed char var_16 = (signed char)-8;
short var_17 = (short)14265;
signed char var_18 = (signed char)-78;
signed char var_19 = (signed char)-100;
int zero = 0;
unsigned long long int var_20 = 8994538014579068132ULL;
short var_21 = (short)-23366;
unsigned long long int var_22 = 7570188790962428985ULL;
unsigned long long int var_23 = 11620478721721408891ULL;
unsigned int var_24 = 3928576583U;
signed char var_25 = (signed char)68;
unsigned int var_26 = 132067909U;
signed char var_27 = (signed char)125;
signed char var_28 = (signed char)39;
long long int var_29 = -997860120323938661LL;
long long int var_30 = -2530987959036888805LL;
unsigned int var_31 = 1283266969U;
unsigned long long int var_32 = 13421160259619792085ULL;
long long int var_33 = -7208439723176637638LL;
unsigned int var_34 = 1824862484U;
unsigned int arr_0 [23] ;
unsigned int arr_1 [23] ;
long long int arr_6 [12] ;
short arr_9 [20] ;
unsigned int arr_10 [20] ;
signed char arr_11 [20] [20] ;
short arr_12 [20] ;
long long int arr_2 [23] [23] ;
unsigned long long int arr_13 [20] ;
unsigned long long int arr_14 [20] ;
long long int arr_19 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2424945179U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1740172697U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -5952010582221644554LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (short)-5521;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 92349599U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (short)-30274;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 2166999266084279927LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = 15280495198770275985ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = 1555529812630698077ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = -9154641306381052620LL;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
