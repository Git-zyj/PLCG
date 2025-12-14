#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23992;
int var_2 = 1107418859;
_Bool var_3 = (_Bool)0;
short var_4 = (short)29449;
signed char var_7 = (signed char)-28;
int var_9 = -266578936;
unsigned int var_11 = 3932735024U;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)186;
int var_15 = 1682674876;
unsigned short var_16 = (unsigned short)24;
int zero = 0;
unsigned short var_19 = (unsigned short)11331;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)232;
short var_22 = (short)-25259;
long long int var_23 = -239572814195981092LL;
unsigned char var_24 = (unsigned char)185;
unsigned int var_25 = 963412516U;
long long int var_26 = 7284279167841354776LL;
short var_27 = (short)15316;
signed char var_28 = (signed char)-124;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)0;
int var_31 = -1069509538;
int arr_0 [24] ;
_Bool arr_1 [24] ;
short arr_2 [24] [24] ;
unsigned int arr_3 [24] [24] [24] ;
signed char arr_5 [24] ;
unsigned long long int arr_8 [24] ;
unsigned short arr_14 [24] [24] ;
int arr_15 [24] [24] [24] ;
int arr_9 [24] ;
unsigned long long int arr_22 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -1568128086;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-12227;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1658122633U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 10462409917546536009ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)64019;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -1387781214;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -96737727 : 1254936120;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 18273921044935490633ULL : 10931671659078475485ULL;
}

void checksum() {
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
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
