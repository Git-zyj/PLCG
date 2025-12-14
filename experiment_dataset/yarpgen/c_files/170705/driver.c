#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -802331288;
int var_3 = 1968261367;
int var_4 = 1879115431;
unsigned short var_5 = (unsigned short)26712;
unsigned short var_6 = (unsigned short)47416;
int var_10 = 61478011;
signed char var_12 = (signed char)-24;
int var_13 = -1359598337;
unsigned short var_14 = (unsigned short)39356;
long long int var_16 = 8278617892713426356LL;
int zero = 0;
int var_18 = -2005763053;
unsigned long long int var_19 = 2707977806026582411ULL;
unsigned int var_20 = 1819468161U;
short var_21 = (short)37;
unsigned long long int var_22 = 7701146936838920115ULL;
unsigned short var_23 = (unsigned short)55451;
int var_24 = -880098253;
short var_25 = (short)3856;
unsigned short var_26 = (unsigned short)26216;
int var_27 = -1183571421;
unsigned long long int var_28 = 6774683375952418055ULL;
short var_29 = (short)16122;
int var_30 = -1406063059;
unsigned long long int var_31 = 14721710791431631528ULL;
unsigned short var_32 = (unsigned short)43432;
int var_33 = 1350242495;
unsigned short arr_0 [25] [25] ;
unsigned long long int arr_1 [25] ;
unsigned long long int arr_3 [25] ;
unsigned int arr_4 [25] [25] ;
int arr_7 [25] ;
int arr_9 [25] [25] [25] [25] [25] [25] ;
unsigned short arr_15 [25] [25] [25] [25] [25] [25] [25] ;
unsigned short arr_13 [25] [25] [25] [25] [25] [25] ;
short arr_20 [25] [25] [25] [25] [25] ;
long long int arr_21 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)33963;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 4173477832308934004ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 2582925775833248818ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 3125611605U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -205057919;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 779285051 : 1000610665;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)29969;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned short)28615 : (unsigned short)57484;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)29287 : (short)-870;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = 4324148667141838787LL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
