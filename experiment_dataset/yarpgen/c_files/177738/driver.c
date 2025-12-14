#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15479;
unsigned long long int var_5 = 711882653500466764ULL;
short var_7 = (short)-31072;
int var_8 = 1291336236;
short var_9 = (short)1853;
int var_11 = -1056335236;
short var_12 = (short)14522;
int var_13 = 838355199;
int zero = 0;
int var_14 = 1114537164;
signed char var_15 = (signed char)100;
unsigned long long int var_16 = 11358798950320290950ULL;
unsigned int var_17 = 279935717U;
signed char var_18 = (signed char)-121;
unsigned long long int var_19 = 10510161693956826491ULL;
signed char var_20 = (signed char)-38;
signed char var_21 = (signed char)63;
unsigned long long int var_22 = 1797658808934990545ULL;
unsigned int var_23 = 4148412238U;
int arr_0 [12] ;
short arr_1 [12] [12] ;
int arr_4 [14] [14] ;
short arr_5 [14] ;
int arr_6 [24] ;
signed char arr_7 [24] ;
short arr_9 [24] [24] ;
unsigned int arr_11 [24] [24] ;
int arr_3 [12] ;
int arr_12 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -753355279;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-27232;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = -2036349931;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-23361 : (short)-2743;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -7360977;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-24041;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 358201310U : 2960216476U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1885858992;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? -1929977030 : -222706491;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
