#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-602;
short var_5 = (short)18323;
long long int var_6 = 5664219293911253941LL;
short var_8 = (short)-13714;
short var_9 = (short)-12786;
unsigned long long int var_12 = 17276650971130645017ULL;
long long int var_13 = -6521970584892709866LL;
short var_15 = (short)-25047;
unsigned char var_16 = (unsigned char)86;
long long int var_17 = 6325583406931430193LL;
unsigned int var_18 = 4180696135U;
unsigned short var_19 = (unsigned short)25742;
int zero = 0;
unsigned long long int var_20 = 16671774625741849525ULL;
unsigned long long int var_21 = 10841673386864120810ULL;
int var_22 = -868487160;
unsigned int var_23 = 785815019U;
unsigned long long int var_24 = 10583122787857550652ULL;
unsigned short var_25 = (unsigned short)44128;
unsigned int var_26 = 2815847951U;
short var_27 = (short)6648;
unsigned int var_28 = 3743893400U;
unsigned int var_29 = 2433720706U;
short var_30 = (short)-9152;
signed char var_31 = (signed char)42;
unsigned long long int var_32 = 1777050699509964086ULL;
unsigned int arr_1 [16] ;
int arr_4 [16] [16] ;
short arr_9 [16] [16] ;
signed char arr_16 [22] ;
int arr_18 [22] ;
unsigned char arr_19 [22] ;
long long int arr_21 [22] ;
signed char arr_2 [16] ;
unsigned int arr_5 [16] [16] [16] ;
short arr_10 [16] [16] [16] ;
signed char arr_11 [16] ;
int arr_14 [16] [16] ;
unsigned long long int arr_15 [16] [16] ;
signed char arr_22 [22] [22] [22] ;
unsigned int arr_25 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1425237968U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 369368554 : -1160451578;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (short)10967;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = -1843170372;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = -7557599950123021707LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)5 : (signed char)126;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1541566369U : 2105470345U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)27425 : (short)-23968;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)-79 : (signed char)113;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? -408187868 : -414288820;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 15464695293449036293ULL : 4595221096303698983ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-109 : (signed char)90;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_25 [i_0] [i_1] = 299748188U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
