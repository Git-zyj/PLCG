#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28205;
unsigned int var_3 = 2715990009U;
unsigned long long int var_4 = 10891836494580457488ULL;
unsigned char var_5 = (unsigned char)83;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 275000251U;
signed char var_9 = (signed char)19;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1539770870U;
unsigned short var_12 = (unsigned short)3797;
int var_14 = 1594583965;
int zero = 0;
unsigned int var_15 = 4031361339U;
unsigned short var_16 = (unsigned short)22888;
int var_17 = 551027209;
unsigned short var_18 = (unsigned short)53150;
signed char var_19 = (signed char)-66;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)24206;
int var_22 = -2005426047;
_Bool var_23 = (_Bool)1;
long long int var_24 = -9138106812338944647LL;
unsigned short arr_0 [17] ;
signed char arr_1 [17] ;
_Bool arr_2 [17] ;
unsigned short arr_3 [17] ;
unsigned int arr_5 [17] [17] ;
unsigned char arr_6 [17] ;
long long int arr_11 [17] ;
long long int arr_4 [17] ;
signed char arr_9 [17] ;
int arr_12 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)2206;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)18027;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 1735720084U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = -1510272063905308783LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -4799518304522107195LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = -670046797;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
