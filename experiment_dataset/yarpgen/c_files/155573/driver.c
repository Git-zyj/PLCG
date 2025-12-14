#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6264146764473937340ULL;
unsigned short var_1 = (unsigned short)61289;
short var_2 = (short)1959;
unsigned long long int var_3 = 12203999831886660330ULL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-8420;
int var_6 = -1121460175;
short var_7 = (short)-11286;
_Bool var_8 = (_Bool)1;
short var_10 = (short)10357;
unsigned long long int var_11 = 16859775637320555048ULL;
unsigned short var_12 = (unsigned short)29614;
unsigned short var_13 = (unsigned short)1730;
int zero = 0;
short var_14 = (short)12747;
short var_15 = (short)13018;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)26296;
unsigned short var_18 = (unsigned short)64592;
int var_19 = -2109761316;
unsigned long long int var_20 = 8708669723732337595ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 13937482362626165842ULL;
short var_23 = (short)-699;
int arr_3 [15] ;
short arr_5 [15] [15] [15] [15] ;
unsigned short arr_7 [15] ;
unsigned short arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 1437114397;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-11515 : (short)18842;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned short)32526;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)63018 : (unsigned short)35249;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
