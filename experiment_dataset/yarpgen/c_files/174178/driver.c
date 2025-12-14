#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 681443653U;
signed char var_1 = (signed char)101;
unsigned long long int var_3 = 1410109768787649084ULL;
unsigned char var_4 = (unsigned char)18;
long long int var_5 = -1675980412585775699LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 3368864588595758424ULL;
signed char var_10 = (signed char)12;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-5;
int zero = 0;
unsigned char var_14 = (unsigned char)121;
short var_15 = (short)19655;
int var_16 = 1598488037;
short var_17 = (short)-2195;
unsigned int var_18 = 3834887757U;
long long int var_19 = -8542853190085848010LL;
unsigned short var_20 = (unsigned short)61657;
unsigned long long int var_21 = 2610844088039522305ULL;
unsigned char var_22 = (unsigned char)209;
signed char var_23 = (signed char)-96;
long long int var_24 = 1820200644995013866LL;
unsigned long long int var_25 = 745170717053043832ULL;
short var_26 = (short)-1088;
unsigned char var_27 = (unsigned char)66;
unsigned int var_28 = 4018863984U;
signed char var_29 = (signed char)-53;
unsigned long long int arr_0 [15] ;
long long int arr_1 [15] ;
unsigned int arr_2 [15] ;
short arr_4 [15] [15] ;
unsigned int arr_5 [15] [15] ;
short arr_12 [15] [15] [15] ;
int arr_15 [19] [19] ;
unsigned short arr_16 [19] [19] ;
unsigned short arr_18 [21] ;
signed char arr_19 [21] [21] ;
_Bool arr_6 [15] ;
unsigned int arr_14 [15] [15] [15] [15] ;
unsigned long long int arr_17 [19] ;
int arr_21 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3464960603134336450ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 85207012158727958LL : -4028090234617837121LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2888138197U : 1758620636U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (short)13070;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 2975075130U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)19721 : (short)-21717;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = -1226446420;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)41944;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (unsigned short)47582;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 4194985859U : 3335213532U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = 18053650926613795177ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = -1160090065;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
