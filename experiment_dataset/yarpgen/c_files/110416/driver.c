#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2136559828U;
short var_1 = (short)17768;
int var_2 = 1443167658;
unsigned long long int var_3 = 7032287890423894987ULL;
short var_5 = (short)-3293;
unsigned char var_7 = (unsigned char)226;
long long int var_8 = 6873842413986928228LL;
signed char var_9 = (signed char)-58;
unsigned int var_12 = 4111015290U;
signed char var_13 = (signed char)-84;
unsigned int var_14 = 3806905794U;
int zero = 0;
short var_15 = (short)-10221;
int var_16 = -1293155223;
unsigned int var_17 = 4076931745U;
unsigned int var_18 = 2008235328U;
unsigned char var_19 = (unsigned char)25;
unsigned int var_20 = 632755390U;
unsigned int var_21 = 3563940409U;
unsigned short var_22 = (unsigned short)29176;
unsigned long long int var_23 = 9431720359314829211ULL;
long long int var_24 = -4069855808036043721LL;
short var_25 = (short)7031;
long long int var_26 = 8270053962379845173LL;
long long int arr_0 [16] ;
unsigned char arr_2 [16] ;
unsigned char arr_6 [16] [16] [16] ;
short arr_7 [16] [16] ;
unsigned int arr_8 [16] ;
short arr_17 [16] [16] [16] ;
signed char arr_18 [16] ;
unsigned int arr_22 [24] ;
unsigned int arr_23 [24] ;
unsigned char arr_25 [24] ;
signed char arr_26 [24] ;
int arr_29 [24] ;
short arr_30 [24] ;
short arr_11 [16] ;
long long int arr_19 [16] [16] [16] [16] ;
long long int arr_20 [16] ;
long long int arr_21 [16] ;
unsigned char arr_24 [24] ;
long long int arr_27 [24] ;
int arr_28 [24] ;
int arr_31 [24] [24] ;
unsigned int arr_32 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1123677116850498534LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (short)20680;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 1794802798U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (short)12689;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = 2095497950U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = 1698216522U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? 1555318647 : 1246444611;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (short)-23138 : (short)-14390;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (short)25563;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 1058783293967078917LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = 3394557176643016696LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = -3902240319881231974LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_24 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = 7897448602807187390LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_28 [i_0] = 1595079639;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_31 [i_0] [i_1] = (i_0 % 2 == 0) ? 1566413583 : -71241264;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_32 [i_0] [i_1] = (i_0 % 2 == 0) ? 2256248329U : 936060267U;
}

void checksum() {
    hash(&seed, var_15);
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
