#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
unsigned char var_3 = (unsigned char)144;
short var_5 = (short)-5068;
unsigned int var_6 = 3179373752U;
unsigned int var_10 = 2000854028U;
short var_12 = (short)23032;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 2004301092U;
short var_18 = (short)18660;
unsigned int var_19 = 1868934325U;
unsigned int var_20 = 283722408U;
int var_21 = 1474426046;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 15000759838478100673ULL;
long long int var_24 = 177071637331090694LL;
unsigned long long int var_25 = 12670167106426363876ULL;
unsigned short var_26 = (unsigned short)41977;
int var_27 = 828655484;
short var_28 = (short)-17526;
short var_29 = (short)-12901;
_Bool var_30 = (_Bool)0;
long long int var_31 = 6185487988772020383LL;
_Bool var_32 = (_Bool)1;
short var_33 = (short)20700;
unsigned long long int var_34 = 8845785463486462792ULL;
short var_35 = (short)-24333;
int var_36 = -126092211;
short var_37 = (short)-16443;
unsigned int var_38 = 2327301803U;
unsigned long long int var_39 = 3224587009624037097ULL;
short arr_1 [12] ;
short arr_7 [12] [12] [12] ;
unsigned int arr_8 [12] [12] [12] [12] ;
signed char arr_11 [12] [12] [12] [12] [12] ;
short arr_12 [12] [12] ;
unsigned char arr_15 [12] ;
signed char arr_23 [20] [20] ;
short arr_32 [20] [20] [20] ;
unsigned long long int arr_33 [20] [20] [20] [20] [20] ;
int arr_16 [12] ;
unsigned int arr_21 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)18557;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-32676;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2355512129U : 2681693307U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (short)-29860;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_23 [i_0] [i_1] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (short)-14049;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = 8408809125648352577ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 1666439741 : -1600838708;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 2229413468U : 924232707U;
}

void checksum() {
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
