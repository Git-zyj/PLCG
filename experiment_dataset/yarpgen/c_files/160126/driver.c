#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64216;
unsigned short var_1 = (unsigned short)42005;
unsigned short var_2 = (unsigned short)48504;
unsigned short var_3 = (unsigned short)48572;
unsigned short var_4 = (unsigned short)56099;
unsigned short var_5 = (unsigned short)59662;
unsigned short var_6 = (unsigned short)34195;
unsigned short var_8 = (unsigned short)607;
unsigned short var_10 = (unsigned short)11533;
unsigned short var_11 = (unsigned short)35668;
unsigned short var_12 = (unsigned short)3216;
unsigned short var_14 = (unsigned short)24117;
unsigned short var_15 = (unsigned short)7815;
int zero = 0;
unsigned short var_16 = (unsigned short)652;
unsigned short var_17 = (unsigned short)50323;
unsigned short var_18 = (unsigned short)49351;
unsigned short var_19 = (unsigned short)33865;
unsigned short var_20 = (unsigned short)32071;
unsigned short var_21 = (unsigned short)17818;
unsigned short var_22 = (unsigned short)17309;
unsigned short var_23 = (unsigned short)7640;
unsigned short var_24 = (unsigned short)46245;
unsigned short var_25 = (unsigned short)14579;
unsigned short var_26 = (unsigned short)12487;
unsigned short var_27 = (unsigned short)49287;
unsigned short arr_0 [11] ;
unsigned short arr_1 [11] ;
unsigned short arr_2 [11] ;
unsigned short arr_6 [15] ;
unsigned short arr_7 [15] ;
unsigned short arr_8 [24] ;
unsigned short arr_10 [24] ;
unsigned short arr_13 [24] [24] ;
unsigned short arr_4 [11] ;
unsigned short arr_5 [11] ;
unsigned short arr_14 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)24435;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)26230 : (unsigned short)40908;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)19719;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned short)50677;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned short)15544;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned short)52853;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned short)35621;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)3071;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17253 : (unsigned short)12558;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)24485 : (unsigned short)61847;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)22205 : (unsigned short)25445;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
