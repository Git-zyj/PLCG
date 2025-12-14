#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7468;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)42658;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)29437;
signed char var_7 = (signed char)-2;
unsigned short var_8 = (unsigned short)4440;
short var_9 = (short)3614;
unsigned short var_10 = (unsigned short)2785;
unsigned short var_11 = (unsigned short)18457;
signed char var_12 = (signed char)42;
short var_13 = (short)-24283;
unsigned short var_14 = (unsigned short)41874;
unsigned short var_15 = (unsigned short)12978;
short var_16 = (short)13547;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)-15716;
short var_19 = (short)11988;
short var_20 = (short)-19648;
signed char var_21 = (signed char)92;
short var_22 = (short)23038;
unsigned short var_23 = (unsigned short)57086;
short var_24 = (short)5995;
signed char var_25 = (signed char)-94;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)1608;
unsigned short var_28 = (unsigned short)5206;
signed char var_29 = (signed char)-111;
_Bool var_30 = (_Bool)1;
signed char var_31 = (signed char)-6;
signed char var_32 = (signed char)82;
_Bool var_33 = (_Bool)0;
signed char var_34 = (signed char)73;
short var_35 = (short)26593;
unsigned short arr_0 [10] ;
_Bool arr_1 [10] [10] ;
short arr_2 [10] [10] ;
_Bool arr_3 [13] [13] ;
unsigned short arr_4 [13] ;
short arr_5 [13] ;
signed char arr_6 [13] [13] ;
_Bool arr_8 [13] ;
_Bool arr_9 [13] ;
signed char arr_10 [17] [17] ;
signed char arr_11 [17] ;
unsigned short arr_12 [18] ;
signed char arr_13 [18] ;
short arr_14 [18] [18] [18] ;
unsigned short arr_15 [18] [18] ;
signed char arr_16 [18] [18] ;
_Bool arr_17 [18] [18] [18] ;
short arr_19 [18] [18] ;
signed char arr_20 [18] ;
unsigned short arr_21 [18] [18] ;
signed char arr_22 [20] ;
short arr_23 [20] [20] ;
_Bool arr_27 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)25432 : (unsigned short)32598;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (short)27782;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14819 : (unsigned short)22389;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)28970 : (short)2342;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (unsigned short)36852;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (short)30846;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)61242 : (unsigned short)37938;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-31402 : (short)22897;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (signed char)121 : (signed char)91;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)44012;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_23 [i_0] [i_1] = (short)26427;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
