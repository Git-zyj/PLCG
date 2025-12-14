#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)32;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)248;
unsigned char var_8 = (unsigned char)64;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-13;
signed char var_12 = (signed char)13;
int var_13 = 1874766231;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3908828623U;
long long int var_17 = -222677626905909475LL;
long long int var_18 = 4028363446613117609LL;
unsigned short var_19 = (unsigned short)10925;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)31;
int var_22 = 78730987;
int var_23 = -1898712182;
_Bool var_24 = (_Bool)0;
int var_25 = 1829170483;
int var_26 = -241774779;
signed char var_27 = (signed char)-86;
signed char var_28 = (signed char)60;
signed char var_29 = (signed char)-58;
int var_30 = -1212293058;
unsigned short var_31 = (unsigned short)60662;
int var_32 = 1474743940;
unsigned char var_33 = (unsigned char)199;
short var_34 = (short)20869;
unsigned int var_35 = 3984463483U;
int arr_1 [23] ;
_Bool arr_2 [23] ;
signed char arr_3 [19] ;
_Bool arr_4 [19] ;
long long int arr_5 [19] [19] ;
signed char arr_6 [19] [19] ;
unsigned int arr_7 [19] [19] ;
long long int arr_8 [19] [19] [19] ;
signed char arr_17 [19] [19] [19] [19] ;
_Bool arr_18 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1440112984;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 3511853110283571845LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)63 : (signed char)3;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = 1900189472U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -4706439296491022571LL : -4226332215509289297LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = (_Bool)0;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
