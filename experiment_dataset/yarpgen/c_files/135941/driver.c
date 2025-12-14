#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47433;
unsigned char var_1 = (unsigned char)139;
long long int var_3 = 6604399677626982467LL;
unsigned int var_4 = 990408886U;
long long int var_6 = -1020117144573387962LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = 5939416429181508267LL;
unsigned short var_9 = (unsigned short)11303;
unsigned long long int var_10 = 16703710473087715389ULL;
unsigned long long int var_11 = 7635657146040039598ULL;
int zero = 0;
signed char var_12 = (signed char)-105;
unsigned char var_13 = (unsigned char)28;
unsigned char var_14 = (unsigned char)128;
long long int var_15 = -295202277419385414LL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-30859;
unsigned int var_18 = 3197969749U;
unsigned char var_19 = (unsigned char)99;
short var_20 = (short)-16565;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)59;
_Bool var_23 = (_Bool)0;
unsigned short arr_1 [22] [22] ;
short arr_2 [22] ;
_Bool arr_3 [22] ;
int arr_6 [22] [22] [22] [22] ;
int arr_7 [22] [22] [22] [22] ;
unsigned char arr_10 [22] ;
unsigned short arr_11 [22] ;
unsigned char arr_12 [22] [22] ;
unsigned int arr_15 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)48132;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)28280;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1198123677;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -33518885;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned short)59435;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = 820495798U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
