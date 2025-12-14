#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -613549497;
unsigned long long int var_2 = 13484838133948761324ULL;
signed char var_3 = (signed char)-118;
int var_4 = -2050746650;
int var_5 = -714522630;
int var_8 = 265564900;
long long int var_9 = -4156343227844169701LL;
unsigned char var_11 = (unsigned char)53;
int var_12 = 645871628;
int zero = 0;
int var_13 = 2132585078;
short var_14 = (short)-17650;
short var_15 = (short)2052;
signed char var_16 = (signed char)-60;
int var_17 = -2064605635;
unsigned short var_18 = (unsigned short)13540;
short var_19 = (short)-28979;
unsigned long long int var_20 = 12383009711891163240ULL;
int var_21 = 622915685;
unsigned short var_22 = (unsigned short)56954;
signed char var_23 = (signed char)-91;
int var_24 = -1000049600;
long long int arr_0 [25] ;
unsigned char arr_1 [25] ;
int arr_3 [25] ;
long long int arr_7 [25] ;
int arr_13 [12] [12] [12] ;
int arr_16 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -4056404636228676853LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -71383751;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -8786174267930159797LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -951012468;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 127978033 : -129304422;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
