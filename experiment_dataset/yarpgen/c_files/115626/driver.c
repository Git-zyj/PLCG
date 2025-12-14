#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32139;
short var_1 = (short)28016;
signed char var_2 = (signed char)109;
unsigned char var_3 = (unsigned char)249;
unsigned int var_5 = 1209966640U;
unsigned short var_7 = (unsigned short)56178;
unsigned char var_8 = (unsigned char)140;
signed char var_9 = (signed char)117;
unsigned long long int var_10 = 10499050896827079154ULL;
unsigned short var_11 = (unsigned short)24334;
unsigned short var_12 = (unsigned short)34401;
long long int var_14 = -2750151430846733821LL;
unsigned int var_15 = 1389581849U;
int var_16 = -755317086;
int zero = 0;
long long int var_17 = 2870236281596117894LL;
unsigned short var_18 = (unsigned short)35317;
signed char var_19 = (signed char)-82;
short var_20 = (short)-32154;
short var_21 = (short)23263;
int var_22 = -1180007402;
short var_23 = (short)-32392;
long long int var_24 = 1763761961351959589LL;
unsigned char var_25 = (unsigned char)46;
unsigned char var_26 = (unsigned char)109;
unsigned char var_27 = (unsigned char)102;
short var_28 = (short)-1991;
unsigned short var_29 = (unsigned short)48165;
unsigned int var_30 = 3345157985U;
int var_31 = 1382535415;
unsigned char var_32 = (unsigned char)1;
_Bool var_33 = (_Bool)0;
unsigned short var_34 = (unsigned short)12604;
long long int var_35 = -1733878020013663234LL;
_Bool var_36 = (_Bool)0;
unsigned short var_37 = (unsigned short)32399;
int var_38 = -766916987;
unsigned short var_39 = (unsigned short)40633;
unsigned short var_40 = (unsigned short)41958;
short var_41 = (short)-8083;
signed char var_42 = (signed char)5;
int var_43 = 243339307;
short var_44 = (short)16546;
unsigned int var_45 = 475462041U;
short var_46 = (short)-17977;
unsigned short var_47 = (unsigned short)56616;
long long int var_48 = 1886685047765746006LL;
int arr_1 [14] ;
short arr_2 [14] ;
signed char arr_3 [14] [14] ;
unsigned int arr_4 [14] ;
signed char arr_6 [14] [14] [14] ;
long long int arr_7 [14] [14] ;
long long int arr_9 [14] [14] [14] [14] ;
unsigned char arr_10 [14] [14] [14] [14] ;
long long int arr_12 [14] [14] [14] [14] ;
signed char arr_14 [14] [14] [14] [14] [14] [14] ;
_Bool arr_16 [12] [12] ;
unsigned short arr_20 [12] [12] [12] ;
short arr_21 [12] ;
unsigned char arr_22 [12] [12] ;
signed char arr_23 [12] [12] [12] [12] ;
_Bool arr_25 [12] [12] ;
unsigned char arr_26 [12] [12] ;
unsigned short arr_36 [12] ;
unsigned long long int arr_37 [12] [12] [12] [12] [12] [12] [12] ;
unsigned short arr_38 [12] [12] [12] [12] [12] ;
signed char arr_5 [14] ;
signed char arr_8 [14] ;
unsigned short arr_39 [12] [12] ;
unsigned int arr_44 [12] [12] [12] [12] [12] [12] ;
unsigned short arr_45 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -2084514335;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)25053;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 1742807604U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 2310673556304354283LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 2303028154487731834LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)42 : (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 4402321384980689376LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (signed char)-127 : (signed char)49;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)28333 : (unsigned short)56356;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (short)1162 : (short)-3498;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)158 : (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_36 [i_0] = (unsigned short)57257;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? 9256033065781509653ULL : 16390286446232269689ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)31345;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_39 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)33641 : (unsigned short)38424;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 1575010763U : 3249238122U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? (unsigned short)809 : (unsigned short)52748;
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
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_45 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
