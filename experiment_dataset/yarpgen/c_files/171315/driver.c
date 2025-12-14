#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 653731036;
int var_1 = -694843836;
int var_2 = 1904530070;
int var_3 = 1376870207;
int var_4 = 434902009;
int var_5 = 1561018709;
int var_6 = 136765701;
unsigned int var_7 = 3045477498U;
unsigned int var_8 = 1416178232U;
int var_10 = 1973207780;
int var_11 = 286561299;
unsigned int var_12 = 2971362307U;
int var_13 = -2060632935;
int var_14 = 1262379711;
int zero = 0;
int var_15 = 1990550181;
int var_16 = -1175753219;
unsigned int var_17 = 2069648459U;
int var_18 = 423734104;
int var_19 = -1220468214;
int var_20 = 1059168319;
int var_21 = -1616911248;
int var_22 = -1255440495;
int var_23 = -1135782936;
int var_24 = -257804889;
int arr_1 [19] ;
unsigned int arr_4 [22] ;
int arr_5 [22] [22] ;
int arr_8 [25] [25] ;
unsigned int arr_9 [25] ;
unsigned int arr_11 [25] ;
int arr_12 [25] [25] ;
int arr_14 [25] [25] [25] [25] ;
int arr_15 [25] ;
unsigned int arr_16 [25] ;
int arr_21 [19] ;
int arr_2 [19] ;
int arr_3 [19] ;
unsigned int arr_6 [22] ;
unsigned int arr_10 [25] ;
int arr_17 [25] ;
int arr_22 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -1503655097;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 3302018695U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -1178561050 : 1424873854;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = -938062408;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 4281861976U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 2690292191U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = -1407561992;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -1539884740;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = -1734197619;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = 2670216004U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = -1148097689;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -970857550;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 93700690;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3589392765U : 2975969984U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 821659581U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = -1326160467;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = 1339714498;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
