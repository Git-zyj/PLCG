#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1170209835;
int var_1 = 983656774;
unsigned int var_3 = 2363270199U;
short var_5 = (short)3610;
unsigned char var_8 = (unsigned char)35;
unsigned long long int var_9 = 10625720405431574187ULL;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-27786;
int var_16 = 704187613;
int var_17 = 256299422;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2013379174U;
unsigned long long int var_22 = 13178194763333895587ULL;
unsigned char var_23 = (unsigned char)186;
unsigned short var_24 = (unsigned short)1588;
unsigned long long int var_25 = 1359080580154774145ULL;
short arr_2 [19] ;
signed char arr_12 [19] ;
unsigned char arr_17 [12] ;
int arr_18 [12] ;
signed char arr_16 [19] [19] [19] [19] ;
unsigned char arr_23 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)27990 : (short)8496;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = 452118457;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-111 : (signed char)58;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned char)31;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
