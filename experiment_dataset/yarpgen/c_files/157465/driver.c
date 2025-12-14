#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-144;
long long int var_1 = 1653552392021479142LL;
unsigned long long int var_3 = 13236923564075650485ULL;
signed char var_4 = (signed char)37;
unsigned long long int var_8 = 6000285552350155070ULL;
int var_10 = -253888335;
long long int var_13 = 6432115179005973628LL;
short var_15 = (short)24727;
unsigned int var_17 = 1270044834U;
short var_18 = (short)-29956;
int zero = 0;
short var_19 = (short)18654;
int var_20 = -1279864009;
long long int var_21 = -5367390146598772054LL;
unsigned long long int var_22 = 10987742399180804147ULL;
long long int var_23 = -4148789387623917057LL;
unsigned int var_24 = 3241994463U;
unsigned long long int var_25 = 10120499738955692866ULL;
short arr_0 [13] ;
short arr_2 [13] [13] ;
unsigned long long int arr_4 [13] ;
unsigned int arr_7 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)17149;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)29335 : (short)17342;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 15296293989465100367ULL : 1337099675127273503ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1735451373U : 3044289749U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
