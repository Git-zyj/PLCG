#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15380;
long long int var_1 = 3223967398203269431LL;
short var_2 = (short)-31936;
short var_3 = (short)15581;
long long int var_4 = 3535022105797250408LL;
short var_5 = (short)21267;
long long int var_6 = 1689358675942384842LL;
unsigned long long int var_7 = 16977874545742400586ULL;
short var_8 = (short)-11758;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 13762384255538624587ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 2073354193U;
unsigned long long int var_14 = 2256997882726671852ULL;
unsigned long long int var_15 = 9863452366873076896ULL;
short var_16 = (short)19736;
_Bool var_17 = (_Bool)1;
long long int var_18 = 6398400701774533414LL;
short var_19 = (short)-31665;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
short var_22 = (short)5197;
long long int var_23 = -2473202285165385048LL;
short var_24 = (short)-4211;
unsigned long long int var_25 = 15780580175850276016ULL;
short var_26 = (short)893;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)1;
short var_29 = (short)8806;
short var_30 = (short)16549;
int var_31 = 913116030;
unsigned long long int var_32 = 11035070551958915154ULL;
long long int var_33 = -5907188614070229432LL;
short var_34 = (short)-6276;
unsigned short var_35 = (unsigned short)49578;
unsigned long long int var_36 = 13498500997875674162ULL;
_Bool var_37 = (_Bool)1;
unsigned short var_38 = (unsigned short)16314;
short var_39 = (short)7938;
unsigned char var_40 = (unsigned char)26;
long long int arr_1 [21] ;
unsigned long long int arr_2 [21] ;
_Bool arr_3 [21] ;
_Bool arr_5 [21] [21] ;
short arr_7 [21] [21] ;
unsigned char arr_8 [24] ;
unsigned short arr_9 [24] ;
_Bool arr_11 [24] [24] ;
int arr_14 [24] [24] [24] ;
unsigned char arr_15 [24] ;
_Bool arr_16 [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -3829046286630410937LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 10020365554807937611ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (short)18312;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned short)21190;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 595262262;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
