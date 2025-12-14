#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4806109540235129127LL;
short var_2 = (short)-25120;
unsigned long long int var_3 = 15841828944110375989ULL;
signed char var_6 = (signed char)83;
short var_7 = (short)31195;
short var_8 = (short)2565;
short var_9 = (short)14924;
short var_11 = (short)-31087;
signed char var_12 = (signed char)114;
unsigned int var_13 = 1940370907U;
int var_14 = -1677786322;
long long int var_15 = 3723994302387169723LL;
long long int var_16 = 9020877954393851964LL;
short var_17 = (short)-28953;
int zero = 0;
unsigned int var_19 = 3090142292U;
signed char var_20 = (signed char)102;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-114;
long long int var_23 = -4039323226843167315LL;
int var_24 = -1186754219;
unsigned int var_25 = 4290564496U;
short var_26 = (short)26445;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 14740319143849368985ULL;
unsigned short var_30 = (unsigned short)56009;
unsigned int var_31 = 3369172394U;
unsigned short var_32 = (unsigned short)24315;
_Bool var_33 = (_Bool)1;
unsigned short var_34 = (unsigned short)15231;
unsigned long long int var_35 = 3248613056475429820ULL;
signed char var_36 = (signed char)107;
signed char var_37 = (signed char)-73;
short var_38 = (short)13607;
unsigned char var_39 = (unsigned char)21;
signed char arr_0 [21] [21] ;
_Bool arr_1 [21] [21] ;
short arr_3 [14] ;
signed char arr_4 [14] ;
unsigned short arr_5 [14] [14] ;
short arr_7 [14] [14] ;
signed char arr_10 [14] [14] ;
signed char arr_11 [14] ;
_Bool arr_17 [23] ;
signed char arr_18 [23] [23] ;
short arr_19 [23] ;
signed char arr_20 [23] ;
_Bool arr_23 [23] ;
int arr_25 [23] [23] [23] ;
_Bool arr_27 [23] [23] ;
unsigned long long int arr_28 [23] ;
unsigned short arr_32 [23] ;
unsigned int arr_35 [23] ;
unsigned int arr_38 [23] [23] [23] [23] [23] ;
int arr_39 [23] ;
unsigned long long int arr_40 [23] ;
unsigned long long int arr_53 [24] [24] [24] ;
unsigned int arr_2 [21] ;
unsigned char arr_6 [14] [14] ;
signed char arr_13 [14] ;
int arr_14 [14] [14] ;
unsigned int arr_21 [23] ;
signed char arr_22 [23] [23] ;
long long int arr_31 [23] [23] [23] ;
int arr_47 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (short)22389;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)18907;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (short)12232;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-68 : (signed char)-99;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (short)7381;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = -1177781125;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_27 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_28 [i_0] = 1175668077204720004ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_32 [i_0] = (unsigned short)56947;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? 233863189U : 4160119375U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = 3742353631U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? -814709610 : 555724880;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? 17356827104475165283ULL : 2737135760712656480ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = 12134653180750493717ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2890287798U : 3664670316U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = -942185126;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = 2364248369U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = -1172155723573345484LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -64111310 : -1433545333;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
