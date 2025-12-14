#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)58;
short var_2 = (short)-10085;
signed char var_3 = (signed char)76;
signed char var_4 = (signed char)47;
unsigned short var_5 = (unsigned short)41385;
unsigned short var_8 = (unsigned short)57761;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)157;
unsigned int var_12 = 541334619U;
unsigned char var_13 = (unsigned char)106;
unsigned char var_14 = (unsigned char)90;
int zero = 0;
unsigned long long int var_17 = 12921673524196555981ULL;
signed char var_18 = (signed char)-57;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-9159;
unsigned char var_22 = (unsigned char)38;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)61;
unsigned short var_25 = (unsigned short)55389;
long long int var_26 = 6240387728688825610LL;
unsigned short var_27 = (unsigned short)37787;
unsigned int var_28 = 2634572716U;
unsigned short var_29 = (unsigned short)35959;
long long int var_30 = 1966012117367943876LL;
signed char var_31 = (signed char)91;
int var_32 = 729171906;
signed char var_33 = (signed char)-82;
short var_34 = (short)8847;
unsigned char var_35 = (unsigned char)99;
unsigned char var_36 = (unsigned char)91;
unsigned char var_37 = (unsigned char)14;
_Bool var_38 = (_Bool)1;
unsigned char var_39 = (unsigned char)228;
unsigned int var_40 = 2942153209U;
signed char arr_0 [21] ;
unsigned long long int arr_1 [21] ;
unsigned char arr_3 [12] [12] ;
unsigned int arr_4 [12] ;
short arr_5 [12] [12] ;
_Bool arr_8 [12] [12] ;
signed char arr_9 [12] ;
signed char arr_10 [12] [12] ;
signed char arr_11 [12] [12] [12] ;
signed char arr_20 [12] [12] [12] ;
_Bool arr_32 [13] ;
int arr_2 [21] ;
_Bool arr_6 [12] ;
unsigned char arr_14 [12] [12] ;
long long int arr_21 [12] ;
unsigned short arr_22 [12] [12] ;
short arr_25 [12] [12] [12] ;
unsigned char arr_28 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 6834933491623748637ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 2491070079U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (short)13782;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_32 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1252525990;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = -6049139959714247329LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)18083;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (short)-10346;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (unsigned char)7;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
