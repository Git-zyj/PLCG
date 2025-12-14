#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2252256477U;
signed char var_1 = (signed char)89;
short var_2 = (short)18534;
unsigned short var_3 = (unsigned short)32496;
unsigned char var_8 = (unsigned char)194;
int var_11 = 1625559745;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 5748939887676884942ULL;
int zero = 0;
signed char var_15 = (signed char)56;
unsigned int var_16 = 2894755672U;
int var_17 = -47554149;
signed char var_18 = (signed char)-122;
_Bool var_19 = (_Bool)1;
long long int var_20 = 610344117347677722LL;
long long int var_21 = 6432629524485327421LL;
short var_22 = (short)13689;
unsigned long long int var_23 = 11558764508085837059ULL;
short var_24 = (short)-32274;
unsigned int var_25 = 1959000986U;
unsigned int var_26 = 2431351282U;
unsigned char var_27 = (unsigned char)217;
long long int var_28 = 6696271987850949205LL;
_Bool var_29 = (_Bool)1;
short var_30 = (short)-13759;
short var_31 = (short)-30115;
unsigned short var_32 = (unsigned short)27728;
unsigned int arr_0 [23] [23] ;
unsigned char arr_1 [23] [23] ;
int arr_3 [18] ;
long long int arr_4 [18] ;
unsigned int arr_5 [18] ;
unsigned int arr_6 [18] ;
unsigned int arr_9 [18] ;
unsigned char arr_10 [18] [18] [18] ;
signed char arr_13 [18] [18] [18] [18] ;
short arr_2 [23] ;
unsigned int arr_16 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 1675087587U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -2090665055;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 789658015586116777LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 251587921U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 1006427436U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 1366343355U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)61 : (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)30 : (signed char)53;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-6739;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 676122712U : 2752615791U;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
