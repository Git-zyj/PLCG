#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27258;
unsigned char var_1 = (unsigned char)36;
long long int var_2 = -5471538183103184743LL;
int var_3 = 1727183141;
unsigned long long int var_5 = 13954199764651286815ULL;
unsigned long long int var_6 = 14780599775898190265ULL;
long long int var_7 = -7303063163918804491LL;
long long int var_8 = 8238759179281001925LL;
int var_9 = 799685880;
signed char var_10 = (signed char)-12;
unsigned char var_11 = (unsigned char)81;
int var_12 = -1506054635;
unsigned long long int var_13 = 8395418286799233404ULL;
unsigned char var_14 = (unsigned char)218;
unsigned short var_15 = (unsigned short)3872;
int zero = 0;
unsigned char var_16 = (unsigned char)155;
long long int var_17 = -2829757039895406911LL;
long long int var_18 = 3497997350255618783LL;
unsigned short var_19 = (unsigned short)45239;
long long int var_20 = 5033562046678703519LL;
long long int var_21 = -30822412384303851LL;
unsigned long long int var_22 = 10926669508329998992ULL;
int var_23 = 1724484762;
int var_24 = 604597819;
_Bool var_25 = (_Bool)0;
int var_26 = -1670225092;
long long int arr_0 [16] ;
short arr_1 [16] [16] ;
short arr_2 [16] ;
int arr_5 [14] ;
_Bool arr_7 [14] [14] ;
int arr_8 [14] [14] [14] ;
signed char arr_10 [14] [14] ;
_Bool arr_12 [14] [14] ;
unsigned char arr_3 [16] [16] ;
int arr_4 [16] ;
signed char arr_13 [14] [14] [14] ;
long long int arr_14 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1752781867112605952LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-31728 : (short)-28712;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-19031;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -1574899346;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -206415516;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)120 : (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2077002949 : 1427145422;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-116 : (signed char)-63;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -4208575439940632709LL : -5338953708916624656LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
