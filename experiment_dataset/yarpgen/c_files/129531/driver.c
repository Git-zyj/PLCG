#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7409708212958901087LL;
unsigned char var_1 = (unsigned char)11;
short var_2 = (short)-2290;
short var_3 = (short)18023;
int var_4 = 1775660686;
short var_5 = (short)2678;
unsigned long long int var_6 = 8534980644642638929ULL;
unsigned long long int var_7 = 496555811714823110ULL;
unsigned long long int var_8 = 5063706776735019459ULL;
unsigned char var_9 = (unsigned char)73;
int zero = 0;
short var_10 = (short)-31424;
unsigned char var_11 = (unsigned char)38;
unsigned int var_12 = 2786729558U;
unsigned int var_13 = 3945113993U;
int var_14 = -1931553236;
short var_15 = (short)22989;
unsigned long long int var_16 = 3176296971853934442ULL;
unsigned char var_17 = (unsigned char)148;
short var_18 = (short)15096;
short var_19 = (short)-3548;
unsigned long long int var_20 = 5743140277689940648ULL;
unsigned char var_21 = (unsigned char)173;
short var_22 = (short)-3851;
short var_23 = (short)31451;
short var_24 = (short)23912;
unsigned long long int var_25 = 15839234527790541706ULL;
unsigned long long int var_26 = 8392599564817212383ULL;
short var_27 = (short)111;
short var_28 = (short)11937;
short arr_1 [15] ;
unsigned int arr_5 [14] ;
unsigned long long int arr_8 [14] [14] ;
short arr_9 [14] [14] ;
short arr_15 [17] ;
short arr_18 [24] ;
unsigned char arr_19 [24] [24] ;
signed char arr_22 [24] [24] ;
short arr_2 [15] ;
unsigned int arr_6 [14] [14] ;
long long int arr_20 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)27589;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3059698484U : 4229802578U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 16441518546090910727ULL : 13246813887334988729ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-4612 : (short)26959;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (short)12894;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (short)25281;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)983;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 2842392556U : 3272979836U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = -7941507393816594924LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
