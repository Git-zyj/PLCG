#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1101306716;
unsigned short var_2 = (unsigned short)31637;
unsigned int var_3 = 2144732698U;
int var_4 = -424012605;
unsigned long long int var_7 = 2524321588488839272ULL;
int zero = 0;
int var_10 = -321643554;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 3410012601706411706ULL;
unsigned char var_15 = (unsigned char)66;
short var_16 = (short)-1425;
unsigned char var_17 = (unsigned char)169;
unsigned short var_18 = (unsigned short)59105;
unsigned long long int var_19 = 10156582208130354331ULL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)51087;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 4639297340268807293ULL;
_Bool var_25 = (_Bool)0;
short var_26 = (short)23072;
unsigned int var_27 = 1039802220U;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 17149984471823014104ULL;
unsigned long long int var_30 = 18346056453107620587ULL;
unsigned long long int var_31 = 8004474410022859720ULL;
unsigned long long int var_32 = 9962723287851947705ULL;
_Bool var_33 = (_Bool)1;
_Bool var_34 = (_Bool)1;
short arr_0 [18] ;
unsigned long long int arr_2 [18] ;
unsigned long long int arr_3 [18] [18] [18] ;
_Bool arr_4 [18] [18] [18] ;
unsigned long long int arr_5 [18] [18] [18] ;
unsigned short arr_6 [18] [18] [18] ;
_Bool arr_7 [18] [18] [18] ;
unsigned int arr_9 [18] [18] [18] [18] ;
unsigned short arr_15 [18] [18] [18] [18] [18] ;
unsigned int arr_16 [20] [20] ;
short arr_17 [20] ;
_Bool arr_18 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)29351;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 9869926941583316695ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 8311223607155703059ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 4137377231557127621ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)4912;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4110974038U : 31086218U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)52543;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = 2946516145U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (short)13324;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = (_Bool)0;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
