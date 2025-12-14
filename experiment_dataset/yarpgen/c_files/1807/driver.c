#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)1;
short var_2 = (short)-3012;
unsigned char var_3 = (unsigned char)222;
long long int var_4 = 2963196904764716846LL;
unsigned long long int var_6 = 12338998186220536686ULL;
unsigned short var_7 = (unsigned short)57817;
int var_8 = -1149074874;
long long int var_9 = -3630572961222517744LL;
signed char var_11 = (signed char)73;
signed char var_12 = (signed char)-102;
short var_13 = (short)24823;
int zero = 0;
signed char var_14 = (signed char)117;
unsigned short var_15 = (unsigned short)7707;
unsigned short var_16 = (unsigned short)19532;
signed char var_17 = (signed char)-97;
unsigned long long int var_18 = 17088457630409984049ULL;
unsigned int var_19 = 3223873406U;
unsigned short var_20 = (unsigned short)27426;
unsigned char var_21 = (unsigned char)98;
unsigned short var_22 = (unsigned short)34098;
unsigned short var_23 = (unsigned short)7213;
unsigned int var_24 = 932938277U;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)80;
unsigned short var_27 = (unsigned short)27375;
unsigned short var_28 = (unsigned short)11378;
unsigned long long int var_29 = 9991144687095525611ULL;
_Bool arr_0 [22] ;
unsigned int arr_1 [22] ;
int arr_2 [22] ;
unsigned int arr_4 [22] ;
unsigned int arr_5 [22] ;
signed char arr_6 [22] [22] [22] [22] ;
signed char arr_8 [22] [22] [22] ;
short arr_9 [22] [22] [22] [22] ;
long long int arr_12 [22] ;
unsigned int arr_16 [22] [22] [22] [22] [22] [22] ;
unsigned short arr_18 [22] [22] [22] [22] ;
unsigned int arr_20 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3427855636U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1894072587 : 969486920;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 1079812124U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 918835407U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-123 : (signed char)110;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)23300;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -4520868384301445428LL : 1020453334254703656LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1019576430U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)38105 : (unsigned short)47298;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1203955528U : 2021988344U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
