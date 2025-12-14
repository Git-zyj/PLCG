#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17930;
unsigned short var_1 = (unsigned short)16223;
unsigned long long int var_3 = 8540514016913230359ULL;
unsigned long long int var_4 = 6851182732043529562ULL;
unsigned char var_5 = (unsigned char)235;
int var_6 = 980270521;
short var_7 = (short)32747;
long long int var_9 = 8846786161742929239LL;
unsigned long long int var_10 = 2708949874761380788ULL;
int var_11 = -794086704;
unsigned char var_12 = (unsigned char)126;
unsigned int var_14 = 161106978U;
unsigned char var_15 = (unsigned char)72;
short var_16 = (short)-23726;
unsigned short var_17 = (unsigned short)7002;
unsigned int var_18 = 2549729870U;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = -2483385991822816377LL;
long long int var_21 = -3528678238903734581LL;
long long int var_22 = 2292860780427776678LL;
unsigned short var_23 = (unsigned short)17969;
unsigned char var_24 = (unsigned char)71;
unsigned int var_25 = 2561433599U;
unsigned short var_26 = (unsigned short)10707;
long long int var_27 = -3116115862968066232LL;
unsigned int var_28 = 2370522691U;
unsigned long long int var_29 = 13025208291846641999ULL;
long long int var_30 = -5095948268078648781LL;
unsigned short var_31 = (unsigned short)43335;
unsigned long long int var_32 = 85312588550508261ULL;
short var_33 = (short)18784;
int arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned int arr_2 [21] ;
unsigned short arr_3 [21] [21] ;
signed char arr_4 [21] [21] ;
unsigned char arr_5 [21] [21] [21] ;
int arr_6 [21] ;
unsigned short arr_7 [21] [21] ;
unsigned char arr_9 [12] ;
unsigned char arr_14 [13] [13] ;
long long int arr_15 [13] ;
unsigned long long int arr_18 [13] [13] ;
unsigned short arr_19 [13] [13] [13] ;
signed char arr_8 [21] [21] [21] ;
unsigned short arr_12 [12] [12] ;
unsigned long long int arr_17 [13] [13] ;
int arr_20 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -1751087861;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)46169;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 3239569676U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)35950;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -849226671;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)36673;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 7508495970998850927LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_18 [i_0] [i_1] = 11701333078218155346ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)27943;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)40820;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = 3767108593255675287ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = -1754312364;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
