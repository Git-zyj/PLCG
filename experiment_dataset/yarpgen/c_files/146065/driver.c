#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46301;
unsigned char var_2 = (unsigned char)72;
long long int var_5 = -2157513809325335542LL;
unsigned int var_6 = 2023842669U;
unsigned long long int var_7 = 2585687404721852141ULL;
unsigned short var_8 = (unsigned short)51351;
signed char var_9 = (signed char)69;
short var_10 = (short)2271;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1905188877U;
unsigned char var_15 = (unsigned char)74;
unsigned short var_16 = (unsigned short)27578;
int zero = 0;
unsigned int var_18 = 1608511352U;
short var_19 = (short)24828;
long long int var_20 = 3618629203193928728LL;
short var_21 = (short)1483;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)48;
unsigned long long int var_24 = 11205095826544424924ULL;
unsigned long long int var_25 = 6942628734059780020ULL;
unsigned short var_26 = (unsigned short)56299;
unsigned short var_27 = (unsigned short)32257;
int arr_1 [24] [24] ;
unsigned int arr_10 [15] [15] ;
_Bool arr_12 [15] [15] [15] [15] ;
int arr_4 [12] [12] ;
short arr_5 [12] ;
unsigned int arr_15 [15] [15] [15] [15] ;
unsigned long long int arr_16 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1884689745;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = 2145697385U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -17273548 : 814418278;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)15296 : (short)-22420;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 719796261U : 2441531292U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = 16232787716513754575ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
