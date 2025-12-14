#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 345343656234809488ULL;
unsigned long long int var_2 = 6466204234968371725ULL;
unsigned long long int var_4 = 6147148321081594263ULL;
short var_5 = (short)7097;
unsigned short var_7 = (unsigned short)4421;
unsigned long long int var_8 = 7047256063965218496ULL;
unsigned long long int var_9 = 17876551187883512631ULL;
unsigned long long int var_11 = 3252102421729802907ULL;
long long int var_13 = -8290570232670470180LL;
unsigned long long int var_14 = 733600921974795189ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)33114;
long long int var_16 = -1570589887888606451LL;
unsigned short var_17 = (unsigned short)4658;
unsigned long long int var_18 = 10663629345284278569ULL;
unsigned short var_19 = (unsigned short)56161;
unsigned long long int var_20 = 15640301549100928192ULL;
unsigned long long int arr_1 [11] ;
short arr_4 [11] ;
unsigned long long int arr_9 [25] ;
long long int arr_10 [25] ;
long long int arr_7 [11] [11] [11] ;
unsigned short arr_8 [11] [11] [11] ;
unsigned short arr_11 [25] [25] ;
short arr_15 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1248537686769729029ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)25347;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 4098615611202562047ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = -4911020900813488736LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -4081813367626868048LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)52596;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)59442;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (short)19345;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
