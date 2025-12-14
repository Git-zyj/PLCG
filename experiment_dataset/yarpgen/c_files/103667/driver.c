#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 788862368520447013ULL;
unsigned short var_2 = (unsigned short)6840;
short var_3 = (short)-26643;
unsigned char var_4 = (unsigned char)12;
unsigned short var_7 = (unsigned short)17596;
unsigned int var_8 = 4004079849U;
unsigned long long int var_17 = 1766615978673934262ULL;
int zero = 0;
long long int var_19 = -7215766687076623957LL;
_Bool var_20 = (_Bool)1;
int var_21 = 1922746252;
unsigned long long int var_22 = 15012071709643947388ULL;
long long int var_23 = -6051337554249905610LL;
long long int var_24 = -9050389665927721721LL;
long long int var_25 = 7668141922014190367LL;
short arr_0 [20] ;
unsigned long long int arr_10 [18] [18] [18] ;
short arr_13 [20] ;
signed char arr_14 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)30023;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 9499636523879021174ULL : 7720366097006705105ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)-8090 : (short)29521;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)-61 : (signed char)125;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
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
