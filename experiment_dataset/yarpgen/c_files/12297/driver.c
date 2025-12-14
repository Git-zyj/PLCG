#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13112;
signed char var_1 = (signed char)-27;
short var_2 = (short)-30670;
signed char var_4 = (signed char)-121;
short var_5 = (short)-21817;
long long int var_6 = -5738346133062949231LL;
unsigned short var_7 = (unsigned short)40302;
short var_8 = (short)-22736;
long long int var_9 = -7368398935802718665LL;
signed char var_10 = (signed char)-76;
signed char var_11 = (signed char)-9;
long long int var_12 = -1218918745610597909LL;
int zero = 0;
short var_13 = (short)18855;
int var_14 = -1364343134;
short var_15 = (short)4485;
unsigned long long int var_16 = 16132443919055519215ULL;
short var_17 = (short)-4724;
long long int var_18 = -5569139753643170025LL;
short var_19 = (short)-1563;
long long int var_20 = -4969663447081305090LL;
short var_21 = (short)-8901;
signed char arr_0 [16] ;
unsigned char arr_1 [16] [16] ;
unsigned char arr_2 [16] ;
int arr_3 [16] [16] ;
signed char arr_5 [13] ;
short arr_6 [13] [13] ;
unsigned long long int arr_7 [13] ;
short arr_4 [16] [16] ;
unsigned long long int arr_8 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)90 : (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 999762658;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-5729;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 2733653956002922767ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)5406 : (short)-15775;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = 5978280265131226875ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
