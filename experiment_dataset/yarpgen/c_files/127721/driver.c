#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -1718709683;
unsigned char var_2 = (unsigned char)25;
long long int var_3 = -2740700306392104394LL;
short var_4 = (short)-16407;
unsigned int var_5 = 875666334U;
unsigned long long int var_6 = 11700696950197794409ULL;
unsigned short var_7 = (unsigned short)26761;
long long int var_8 = 4806513751861894458LL;
long long int var_9 = -4923422764052431677LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3695064666U;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)33719;
long long int var_14 = 7904021637554808278LL;
short var_15 = (short)-22073;
unsigned short var_16 = (unsigned short)7207;
short var_17 = (short)-24224;
int var_18 = -224593893;
unsigned long long int arr_0 [14] ;
long long int arr_1 [14] ;
long long int arr_2 [14] [14] ;
unsigned char arr_3 [14] [14] [14] ;
short arr_4 [14] ;
unsigned long long int arr_5 [14] [14] [14] ;
short arr_6 [14] [14] [14] ;
int arr_8 [11] [11] ;
unsigned int arr_9 [11] ;
unsigned long long int arr_7 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 16366414803779409872ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -4326917119675583200LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 7877634830703980519LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (short)-32680;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 6664363828691160014ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)16090;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = -540379723;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 149071144U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 6900164180790192015ULL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
