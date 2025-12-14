#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)27441;
unsigned int var_2 = 691219341U;
unsigned long long int var_3 = 7135411505973121676ULL;
unsigned char var_4 = (unsigned char)17;
short var_5 = (short)23964;
unsigned char var_6 = (unsigned char)15;
short var_7 = (short)20231;
long long int var_8 = -6849493326874966759LL;
unsigned int var_9 = 2133050592U;
signed char var_10 = (signed char)110;
unsigned char var_11 = (unsigned char)161;
unsigned int var_12 = 356069240U;
short var_13 = (short)21861;
unsigned int var_14 = 67090859U;
unsigned short var_16 = (unsigned short)6094;
unsigned short var_17 = (unsigned short)3301;
int zero = 0;
unsigned short var_18 = (unsigned short)28275;
short var_19 = (short)15669;
unsigned char var_20 = (unsigned char)45;
unsigned char var_21 = (unsigned char)203;
short var_22 = (short)-9237;
unsigned char var_23 = (unsigned char)218;
int var_24 = 69331477;
unsigned short var_25 = (unsigned short)45353;
unsigned long long int arr_4 [13] [13] ;
unsigned char arr_9 [20] [20] [20] ;
unsigned long long int arr_13 [20] [20] ;
short arr_14 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 1637477782616463126ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)197 : (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = 16634527972730632783ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (short)26361;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
