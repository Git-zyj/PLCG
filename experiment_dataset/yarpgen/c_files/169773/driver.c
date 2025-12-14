#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_4 = -7358810566924198165LL;
long long int var_6 = -7780261193274834051LL;
unsigned long long int var_7 = 442625980856093644ULL;
long long int var_10 = -5531488909229641164LL;
signed char var_13 = (signed char)17;
long long int var_14 = 7948434065081138651LL;
unsigned int var_15 = 1794094697U;
unsigned int var_17 = 1794117832U;
unsigned char var_18 = (unsigned char)81;
_Bool var_19 = (_Bool)0;
int zero = 0;
int var_20 = -219220847;
long long int var_21 = 3769456013296989725LL;
long long int var_22 = 6181598711701514340LL;
unsigned long long int var_23 = 12796581905111077439ULL;
long long int var_24 = -7250653409177908720LL;
unsigned int var_25 = 437740024U;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 3521430543U;
int var_28 = -1349132827;
long long int var_29 = 2333351488239204708LL;
_Bool var_30 = (_Bool)1;
short var_31 = (short)-26757;
short var_32 = (short)-6916;
short var_33 = (short)24589;
unsigned char var_34 = (unsigned char)225;
_Bool var_35 = (_Bool)1;
int var_36 = -1657370038;
long long int var_37 = -4583637972597358927LL;
signed char var_38 = (signed char)-15;
signed char arr_0 [17] ;
unsigned long long int arr_1 [17] ;
long long int arr_3 [15] ;
short arr_7 [10] ;
_Bool arr_15 [17] ;
short arr_16 [17] [17] [17] ;
unsigned short arr_17 [17] ;
unsigned long long int arr_18 [17] [17] ;
int arr_19 [17] [17] [17] ;
unsigned long long int arr_20 [17] [17] [17] [17] ;
unsigned char arr_22 [17] [17] ;
_Bool arr_23 [17] [17] [17] [17] ;
unsigned long long int arr_24 [17] [17] [17] [17] ;
unsigned short arr_28 [17] ;
int arr_2 [17] ;
short arr_6 [15] ;
unsigned int arr_10 [10] ;
_Bool arr_11 [10] ;
unsigned char arr_25 [17] [17] [17] ;
long long int arr_26 [17] [17] [17] ;
unsigned long long int arr_32 [17] [17] ;
short arr_33 [17] [17] ;
unsigned char arr_34 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)113 : (signed char)27;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 5680677838690930609ULL : 13457580792443324202ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 3337594671760939130LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (short)-8558;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)-3655;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (unsigned short)9666;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = 8705213688987310265ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 2034684687;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 8162741696570397128ULL : 16744637274890480701ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 17752501426933467118ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_28 [i_0] = (unsigned short)36873;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 288343382 : -869055011;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)25598;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 2666781131U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = -212253979115936121LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_32 [i_0] [i_1] = 2734625359888519969ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_33 [i_0] [i_1] = (short)4157;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_34 [i_0] = (unsigned char)134;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
