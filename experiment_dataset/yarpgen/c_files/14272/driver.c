#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-102;
signed char var_3 = (signed char)90;
long long int var_4 = -2223988742939174575LL;
int var_9 = -1467096650;
signed char var_10 = (signed char)71;
int zero = 0;
unsigned short var_12 = (unsigned short)31354;
unsigned short var_13 = (unsigned short)57745;
unsigned long long int var_14 = 12471150873813727954ULL;
long long int var_15 = 4898346638146719264LL;
short var_16 = (short)2909;
short var_17 = (short)6843;
short var_18 = (short)30816;
unsigned long long int var_19 = 7170198320286596087ULL;
short var_20 = (short)2381;
short var_21 = (short)-16910;
_Bool var_22 = (_Bool)1;
short arr_0 [21] ;
unsigned int arr_6 [22] [22] [22] ;
unsigned long long int arr_11 [22] [22] [22] [22] ;
unsigned short arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)15740 : (short)-13071;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3296087684U : 2798260277U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 16688433935975218149ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)38288 : (unsigned short)17352;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
