#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-120;
unsigned long long int var_2 = 1145162656944795914ULL;
signed char var_3 = (signed char)-99;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-105;
unsigned long long int var_6 = 1699799240481455901ULL;
int var_7 = -897439011;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int var_11 = -988394678;
int zero = 0;
unsigned char var_12 = (unsigned char)25;
unsigned short var_13 = (unsigned short)45524;
unsigned short var_14 = (unsigned short)26485;
unsigned char var_15 = (unsigned char)80;
unsigned short var_16 = (unsigned short)22572;
int var_17 = 395522318;
unsigned short var_18 = (unsigned short)55204;
unsigned int var_19 = 910738519U;
unsigned int var_20 = 1193533126U;
unsigned int var_21 = 3957504687U;
unsigned char var_22 = (unsigned char)116;
unsigned short arr_0 [12] ;
signed char arr_1 [12] ;
unsigned long long int arr_5 [12] [12] [12] ;
long long int arr_7 [12] [12] [12] ;
unsigned long long int arr_9 [12] [12] [12] ;
unsigned short arr_10 [12] ;
unsigned long long int arr_11 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)58919;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2526615532796722372ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8802459057403160631LL : -2384615405261467655LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 15528524938734985276ULL : 12661266026181102745ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (unsigned short)4070;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 14161170992695318016ULL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
