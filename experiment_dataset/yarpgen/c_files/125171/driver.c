#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 793117891U;
short var_1 = (short)-19345;
unsigned char var_2 = (unsigned char)199;
unsigned int var_3 = 4043910416U;
short var_4 = (short)15582;
signed char var_5 = (signed char)42;
short var_6 = (short)-27251;
unsigned short var_7 = (unsigned short)47188;
unsigned long long int var_8 = 6515014265589314113ULL;
short var_9 = (short)-19360;
int zero = 0;
int var_10 = 1786527465;
signed char var_11 = (signed char)29;
long long int var_12 = -6948093280905943177LL;
unsigned int var_13 = 1933153361U;
unsigned short var_14 = (unsigned short)42827;
unsigned char var_15 = (unsigned char)154;
long long int var_16 = 9024086527248562583LL;
unsigned short var_17 = (unsigned short)61672;
unsigned int var_18 = 2259836910U;
short var_19 = (short)-8821;
unsigned char var_20 = (unsigned char)227;
int var_21 = 251388155;
unsigned long long int var_22 = 10560690552156483845ULL;
unsigned short var_23 = (unsigned short)52531;
int var_24 = 1640867261;
short var_25 = (short)28213;
unsigned short arr_1 [23] [23] ;
short arr_2 [23] ;
unsigned short arr_3 [23] ;
unsigned short arr_4 [23] ;
long long int arr_6 [23] ;
short arr_7 [23] ;
unsigned short arr_8 [23] [23] [23] ;
_Bool arr_9 [23] [23] ;
unsigned int arr_15 [12] ;
unsigned long long int arr_17 [12] [12] ;
signed char arr_19 [12] [12] [12] ;
signed char arr_20 [12] [12] ;
signed char arr_12 [12] ;
unsigned short arr_22 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)26559;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-1130;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)19780;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)20852;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 7327638401050469890LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)2401;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)612;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = 2276268764U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = 16868681093110319107ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned short)64503;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
