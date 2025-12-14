#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-80;
unsigned char var_1 = (unsigned char)26;
unsigned long long int var_2 = 17383546935574469563ULL;
unsigned char var_3 = (unsigned char)150;
signed char var_6 = (signed char)-106;
unsigned long long int var_8 = 13251029049460741743ULL;
unsigned short var_9 = (unsigned short)51763;
unsigned long long int var_14 = 3533744508140001036ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)24031;
unsigned short var_20 = (unsigned short)58078;
unsigned long long int var_21 = 4867982141549487348ULL;
unsigned long long int var_22 = 11681481584224090203ULL;
unsigned short var_23 = (unsigned short)18062;
unsigned char var_24 = (unsigned char)228;
unsigned long long int var_25 = 18236535039703643084ULL;
unsigned char var_26 = (unsigned char)174;
unsigned int var_27 = 50178210U;
unsigned short var_28 = (unsigned short)8891;
unsigned long long int var_29 = 162369730295514139ULL;
unsigned char var_30 = (unsigned char)205;
_Bool var_31 = (_Bool)0;
unsigned short arr_1 [24] ;
unsigned int arr_2 [24] ;
unsigned short arr_3 [24] ;
unsigned long long int arr_4 [24] [24] ;
unsigned char arr_5 [24] [24] [24] ;
unsigned long long int arr_6 [24] [24] [24] ;
_Bool arr_11 [24] [24] ;
unsigned char arr_14 [22] ;
unsigned long long int arr_15 [22] ;
short arr_17 [22] ;
signed char arr_8 [24] ;
unsigned char arr_13 [24] ;
unsigned long long int arr_18 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)64017;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 3117205577U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)44448;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 18296676260638275634ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 5450865514082929913ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 15571820451505469512ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (short)-20486;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)137 : (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = 2109989919789730428ULL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
