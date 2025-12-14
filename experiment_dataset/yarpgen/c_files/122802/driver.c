#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34327;
long long int var_2 = 3998730969085797665LL;
signed char var_3 = (signed char)-76;
unsigned char var_5 = (unsigned char)28;
unsigned char var_7 = (unsigned char)136;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 12163328463763091558ULL;
unsigned char var_10 = (unsigned char)134;
int var_12 = 1400467196;
short var_13 = (short)22062;
long long int var_14 = 4275221232155816826LL;
int zero = 0;
unsigned long long int var_15 = 3163011130268933529ULL;
unsigned long long int var_16 = 10648532303167975315ULL;
long long int var_17 = 4021882356700937839LL;
unsigned long long int var_18 = 2371550800669748109ULL;
unsigned short var_19 = (unsigned short)25174;
unsigned short var_20 = (unsigned short)26598;
short var_21 = (short)5041;
int var_22 = -1932529142;
unsigned long long int var_23 = 17758738380744068078ULL;
signed char var_24 = (signed char)-43;
_Bool var_25 = (_Bool)0;
int var_26 = -1132946333;
signed char var_27 = (signed char)27;
int var_28 = -463012731;
long long int var_29 = 8259819042516835400LL;
unsigned long long int var_30 = 17095720274302696339ULL;
short var_31 = (short)32519;
int var_32 = 1018400977;
unsigned int var_33 = 1039122110U;
unsigned char var_34 = (unsigned char)220;
unsigned long long int var_35 = 593422493983634496ULL;
signed char var_36 = (signed char)-99;
unsigned long long int arr_1 [22] ;
unsigned long long int arr_2 [22] ;
unsigned long long int arr_3 [22] [22] ;
_Bool arr_4 [22] ;
unsigned long long int arr_8 [22] [22] [22] [22] [22] ;
short arr_10 [22] ;
int arr_12 [22] [22] [22] [22] ;
short arr_14 [22] [22] [22] [22] [22] ;
int arr_19 [22] [22] [22] [22] ;
short arr_21 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 16177495253036521128ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 16975609144349905925ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 7349908053941590688ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 11888862231525946390ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (short)-4909;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 162332737 : -372413422;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)8111;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1874827533 : -84934330;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (short)-9315;
}

void checksum() {
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
