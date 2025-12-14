#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
unsigned char var_1 = (unsigned char)119;
short var_3 = (short)30165;
signed char var_4 = (signed char)9;
signed char var_6 = (signed char)21;
long long int var_8 = 5809463502981414614LL;
unsigned int var_9 = 3584858095U;
unsigned char var_11 = (unsigned char)87;
signed char var_12 = (signed char)-26;
long long int var_13 = 1415775725234447479LL;
short var_14 = (short)-5181;
unsigned short var_15 = (unsigned short)35388;
signed char var_16 = (signed char)108;
signed char var_17 = (signed char)17;
int zero = 0;
unsigned short var_19 = (unsigned short)19240;
long long int var_20 = -4949690110675188821LL;
long long int var_21 = -619492447261054221LL;
long long int var_22 = 8262966885543529815LL;
long long int var_23 = -5709747049007409322LL;
long long int var_24 = -2434504131216653007LL;
signed char var_25 = (signed char)61;
signed char var_26 = (signed char)63;
unsigned char var_27 = (unsigned char)139;
signed char var_28 = (signed char)-66;
unsigned int var_29 = 3765928700U;
signed char var_30 = (signed char)38;
signed char var_31 = (signed char)0;
unsigned int var_32 = 1163391269U;
unsigned short var_33 = (unsigned short)12997;
unsigned int var_34 = 3725409348U;
short var_35 = (short)6627;
unsigned int var_36 = 1809391884U;
signed char var_37 = (signed char)29;
signed char var_38 = (signed char)127;
long long int var_39 = 2377358478611198124LL;
short var_40 = (short)5668;
signed char var_41 = (signed char)-62;
signed char var_42 = (signed char)-27;
short var_43 = (short)-3316;
signed char var_44 = (signed char)94;
unsigned int var_45 = 1905472969U;
signed char var_46 = (signed char)78;
unsigned int var_47 = 744123864U;
unsigned char var_48 = (unsigned char)16;
unsigned char var_49 = (unsigned char)226;
unsigned int var_50 = 1680970714U;
signed char arr_1 [13] ;
unsigned char arr_2 [13] [13] ;
signed char arr_5 [13] [13] [13] ;
unsigned int arr_7 [13] [13] [13] ;
long long int arr_8 [13] ;
unsigned int arr_9 [13] ;
unsigned char arr_10 [13] [13] [13] [13] [13] ;
signed char arr_12 [13] [13] [13] [13] [13] ;
long long int arr_13 [13] ;
unsigned int arr_15 [13] [13] [13] ;
unsigned short arr_17 [13] [13] [13] ;
long long int arr_18 [13] ;
unsigned char arr_19 [13] [13] [13] [13] ;
short arr_20 [13] [13] [13] ;
signed char arr_22 [13] ;
signed char arr_23 [13] [13] [13] [13] [13] ;
signed char arr_26 [13] [13] [13] [13] ;
unsigned short arr_28 [13] [13] [13] [13] [13] ;
unsigned char arr_29 [13] [13] [13] [13] [13] [13] [13] ;
signed char arr_36 [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3927956774U : 3890437116U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 3881866625171075521LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 291434950U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = 6730421319970499232LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 89057327U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned short)54601;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? -4601094330251842864LL : -4750993370206636380LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (short)-25228;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)49149;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (unsigned char)12 : (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)121;
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
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
