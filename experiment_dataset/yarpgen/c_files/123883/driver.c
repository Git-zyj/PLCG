#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53693;
long long int var_4 = -8515561258690987704LL;
int var_5 = 1741419693;
unsigned int var_8 = 2255559796U;
int var_10 = 583205112;
unsigned short var_13 = (unsigned short)13148;
unsigned short var_14 = (unsigned short)2719;
unsigned short var_15 = (unsigned short)7378;
int zero = 0;
unsigned int var_16 = 1081351938U;
unsigned int var_17 = 916376718U;
unsigned int var_18 = 2324621692U;
short var_19 = (short)26890;
unsigned int var_20 = 928004856U;
unsigned long long int var_21 = 419754132801597912ULL;
unsigned int var_22 = 3311267702U;
short var_23 = (short)-20680;
int var_24 = 1308862841;
short var_25 = (short)-1697;
short var_26 = (short)-26;
unsigned long long int var_27 = 8529150964009761063ULL;
short var_28 = (short)-3466;
int var_29 = -1019561249;
long long int var_30 = 7725688999423715789LL;
short var_31 = (short)-21449;
unsigned short var_32 = (unsigned short)49296;
unsigned long long int arr_0 [20] [20] ;
unsigned int arr_1 [20] [20] ;
unsigned int arr_2 [20] ;
long long int arr_4 [20] ;
long long int arr_5 [20] [20] [20] ;
unsigned int arr_6 [20] [20] [20] ;
long long int arr_7 [20] [20] [20] ;
long long int arr_8 [12] ;
short arr_12 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 13312779487773866937ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 435069418U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 3959926565U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -2010194132715512811LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -9156783117441850157LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3793707159U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -5260040700901135887LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = -6224540752237106851LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (short)-14991;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
