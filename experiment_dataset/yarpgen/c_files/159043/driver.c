#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-129;
signed char var_4 = (signed char)-114;
unsigned long long int var_6 = 3478928057609115121ULL;
short var_7 = (short)22495;
int var_8 = -1272597378;
int var_9 = 1481675380;
short var_10 = (short)-8834;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-60;
unsigned short var_14 = (unsigned short)62863;
signed char var_17 = (signed char)55;
int zero = 0;
unsigned long long int var_18 = 231227337777654189ULL;
unsigned int var_19 = 1102951270U;
unsigned long long int var_20 = 15608798853394005158ULL;
unsigned short var_21 = (unsigned short)1195;
int var_22 = 321821490;
unsigned short var_23 = (unsigned short)61433;
short var_24 = (short)-13764;
short var_25 = (short)-23981;
signed char var_26 = (signed char)-13;
unsigned char var_27 = (unsigned char)242;
signed char var_28 = (signed char)1;
short var_29 = (short)-3363;
unsigned long long int var_30 = 548885913060671844ULL;
_Bool var_31 = (_Bool)0;
short var_32 = (short)-27188;
_Bool var_33 = (_Bool)1;
unsigned short arr_15 [24] [24] [24] [24] [24] [24] ;
signed char arr_22 [24] ;
short arr_23 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned short)51144 : (unsigned short)62840;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (signed char)-63 : (signed char)80;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (short)-26881 : (short)1452;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
