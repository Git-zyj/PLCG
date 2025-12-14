#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)22;
long long int var_1 = 90736314541861639LL;
signed char var_3 = (signed char)-57;
unsigned int var_4 = 184920328U;
unsigned char var_5 = (unsigned char)155;
unsigned char var_6 = (unsigned char)5;
int var_10 = -941748221;
int var_11 = 1438361736;
signed char var_12 = (signed char)-15;
unsigned char var_16 = (unsigned char)81;
signed char var_17 = (signed char)-23;
signed char var_18 = (signed char)51;
int zero = 0;
int var_19 = -1174776904;
long long int var_20 = -8717089945867271939LL;
unsigned char var_21 = (unsigned char)174;
unsigned long long int var_22 = 17873474595814442258ULL;
signed char var_23 = (signed char)88;
long long int var_24 = -5888964553159637444LL;
unsigned char var_25 = (unsigned char)74;
unsigned short arr_1 [12] ;
unsigned short arr_4 [12] [12] [12] ;
long long int arr_5 [12] [12] ;
unsigned char arr_7 [12] [12] [12] ;
signed char arr_11 [22] ;
signed char arr_12 [22] ;
signed char arr_17 [13] ;
short arr_3 [12] [12] ;
unsigned short arr_10 [12] [12] [12] [12] ;
long long int arr_13 [22] ;
short arr_14 [22] ;
long long int arr_15 [22] ;
unsigned short arr_18 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)41983;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)62562;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 8592561040143606717LL : 4826179956158264061LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-30420;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)6786 : (unsigned short)29284;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 6029813233830885369LL : -4153607800432731889LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)18270 : (short)1470;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 8307007281623244045LL : -4148592345562408748LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (unsigned short)64379;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
