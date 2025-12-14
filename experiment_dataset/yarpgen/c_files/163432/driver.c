#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28544;
signed char var_1 = (signed char)87;
int var_2 = 1840825082;
unsigned long long int var_3 = 10532582465123563256ULL;
unsigned char var_4 = (unsigned char)227;
short var_6 = (short)31830;
unsigned short var_7 = (unsigned short)58196;
int zero = 0;
unsigned char var_14 = (unsigned char)24;
short var_15 = (short)10674;
_Bool var_16 = (_Bool)0;
short var_17 = (short)3190;
short var_18 = (short)17629;
unsigned int var_19 = 4007102771U;
unsigned char var_20 = (unsigned char)145;
int var_21 = -527649588;
signed char var_22 = (signed char)27;
int var_23 = -418859514;
signed char arr_0 [21] ;
signed char arr_1 [21] ;
short arr_2 [21] [21] ;
int arr_4 [21] [21] ;
int arr_5 [21] [21] ;
signed char arr_8 [21] ;
_Bool arr_9 [21] ;
unsigned long long int arr_3 [21] ;
int arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)7 : (signed char)-83;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-17039 : (short)7912;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = -2063866502;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = -667274800;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 11135811509641615066ULL : 9749581098177031921ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 509775342;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
