#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 465954125U;
unsigned char var_1 = (unsigned char)98;
unsigned int var_2 = 3527834078U;
long long int var_4 = -7920826282182609000LL;
unsigned short var_6 = (unsigned short)7040;
unsigned short var_7 = (unsigned short)7818;
unsigned short var_8 = (unsigned short)51300;
signed char var_9 = (signed char)48;
int zero = 0;
signed char var_11 = (signed char)-101;
signed char var_12 = (signed char)-6;
signed char var_13 = (signed char)12;
signed char var_14 = (signed char)-45;
unsigned int var_15 = 3505478152U;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)24047;
signed char var_18 = (signed char)16;
int var_19 = 2015106832;
signed char var_20 = (signed char)64;
unsigned short var_21 = (unsigned short)52657;
signed char var_22 = (signed char)-96;
signed char var_23 = (signed char)118;
unsigned short var_24 = (unsigned short)24436;
signed char var_25 = (signed char)-120;
unsigned int var_26 = 1688058955U;
unsigned short var_27 = (unsigned short)38769;
unsigned short var_28 = (unsigned short)58850;
long long int var_29 = -8311760764375506410LL;
unsigned int var_30 = 2527676379U;
signed char var_31 = (signed char)71;
signed char var_32 = (signed char)-47;
unsigned int var_33 = 3839410422U;
unsigned short var_34 = (unsigned short)29498;
signed char arr_1 [12] ;
unsigned short arr_2 [12] ;
unsigned char arr_4 [12] ;
int arr_5 [12] ;
int arr_10 [12] [12] [12] [12] ;
unsigned short arr_14 [12] [12] [12] [12] [12] ;
unsigned char arr_15 [12] [12] [12] [12] ;
long long int arr_17 [12] [12] [12] ;
unsigned short arr_18 [12] [12] ;
int arr_24 [12] [12] ;
unsigned int arr_30 [12] [12] [12] ;
signed char arr_19 [12] [12] [12] ;
unsigned int arr_31 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)46559;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 351466504 : -130472839;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 358809038;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)3550;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2590963057141652479LL : 7843634444624012220LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)56109;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_24 [i_0] [i_1] = -750245599;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 2651530701U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)51 : (signed char)118;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_31 [i_0] [i_1] = (i_1 % 2 == 0) ? 2088500986U : 385418429U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
