#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)24093;
short var_3 = (short)-20209;
unsigned int var_5 = 1337827860U;
unsigned char var_7 = (unsigned char)152;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)181;
long long int var_10 = -8860627010960367762LL;
unsigned char var_12 = (unsigned char)121;
unsigned int var_13 = 1613935725U;
unsigned int var_18 = 3826519207U;
int zero = 0;
signed char var_20 = (signed char)-86;
unsigned char var_21 = (unsigned char)133;
long long int var_22 = 2906947320186281247LL;
unsigned char var_23 = (unsigned char)93;
unsigned char var_24 = (unsigned char)13;
short var_25 = (short)-12671;
int var_26 = -1517032936;
unsigned short var_27 = (unsigned short)14729;
unsigned int var_28 = 3604533189U;
signed char var_29 = (signed char)-86;
unsigned short var_30 = (unsigned short)53660;
short var_31 = (short)10001;
unsigned long long int arr_2 [21] ;
_Bool arr_3 [21] [21] ;
unsigned short arr_4 [21] [21] [21] ;
_Bool arr_9 [21] [21] [21] [21] ;
unsigned int arr_11 [21] [21] [21] [21] ;
signed char arr_13 [21] [21] ;
unsigned int arr_14 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 14150977205292133276ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)8534;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 637737328U : 3882840905U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 2826927397U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
