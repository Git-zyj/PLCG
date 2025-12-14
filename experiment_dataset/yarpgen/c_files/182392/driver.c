#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12334;
unsigned int var_1 = 2973170262U;
long long int var_2 = 7111372580940156386LL;
long long int var_3 = -2503129903522758128LL;
_Bool var_4 = (_Bool)1;
long long int var_6 = 1081549565538796158LL;
unsigned char var_8 = (unsigned char)40;
unsigned int var_9 = 694829985U;
long long int var_10 = -2746061697836230863LL;
unsigned short var_11 = (unsigned short)15391;
unsigned int var_12 = 3638901513U;
int zero = 0;
unsigned int var_14 = 4260285187U;
unsigned long long int var_15 = 11504899008653071107ULL;
unsigned short var_16 = (unsigned short)61321;
unsigned int var_17 = 1588601081U;
int var_18 = 619028110;
long long int var_19 = 4486640775458395056LL;
unsigned int var_20 = 30056469U;
short var_21 = (short)3168;
int var_22 = 217258792;
int var_23 = 68029566;
long long int var_24 = 6305269821808854990LL;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)23717;
unsigned short var_27 = (unsigned short)22892;
long long int arr_0 [20] ;
unsigned long long int arr_1 [20] ;
unsigned short arr_3 [20] [20] [20] ;
unsigned short arr_4 [20] ;
unsigned long long int arr_5 [20] [20] [20] ;
long long int arr_6 [20] ;
unsigned long long int arr_7 [20] [20] [20] ;
int arr_10 [20] [20] ;
long long int arr_11 [20] [20] ;
long long int arr_12 [20] [20] [20] ;
int arr_13 [20] [20] [20] [20] ;
long long int arr_17 [15] ;
long long int arr_18 [15] ;
int arr_19 [15] ;
int arr_2 [20] ;
_Bool arr_8 [20] [20] [20] ;
short arr_16 [20] [20] [20] ;
unsigned short arr_21 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 7259440579400857983LL : -7739390712771684860LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 6023478883190616272ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)10074 : (unsigned short)12819;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)7430;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2717923953998243201ULL : 12703887315939383447ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -501663968769987239LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 15261520437322208712ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 1879154909 : -2137572595;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 418113812709474989LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2991843923099636759LL : 3674371955684727851LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -271503566;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = 8865162316682206632LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = -9109691749979872433LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = -835358858;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1801775973 : -2039365928;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-26969 : (short)3822;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)44311;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
