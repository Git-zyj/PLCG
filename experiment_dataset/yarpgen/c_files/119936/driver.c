#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2115794014U;
int var_3 = 1867594085;
signed char var_5 = (signed char)-47;
short var_8 = (short)-29394;
unsigned int var_10 = 485319358U;
int var_12 = -1909569901;
int zero = 0;
int var_13 = -263226216;
unsigned int var_14 = 4107404322U;
signed char var_15 = (signed char)-28;
unsigned int var_16 = 640545392U;
unsigned int var_17 = 3850615876U;
signed char var_18 = (signed char)97;
unsigned int var_19 = 3292393293U;
signed char var_20 = (signed char)20;
int var_21 = -483343384;
unsigned int var_22 = 130946893U;
unsigned int arr_0 [18] ;
unsigned int arr_1 [18] ;
signed char arr_4 [11] ;
signed char arr_6 [11] [11] ;
signed char arr_7 [11] ;
short arr_14 [15] [15] ;
signed char arr_16 [15] [15] [15] ;
int arr_20 [15] [15] [15] [15] ;
unsigned int arr_2 [18] [18] ;
unsigned int arr_12 [11] [11] ;
short arr_22 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 4179074516U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 743053248U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (short)19878;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = -1913579800;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 415482624U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = 1074544745U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)25853 : (short)4763;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
