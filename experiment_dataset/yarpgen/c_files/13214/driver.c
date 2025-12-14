#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1978977377;
signed char var_3 = (signed char)29;
unsigned long long int var_4 = 15023685819786718240ULL;
unsigned short var_6 = (unsigned short)23891;
unsigned char var_7 = (unsigned char)156;
signed char var_13 = (signed char)124;
_Bool var_14 = (_Bool)1;
short var_18 = (short)22641;
int zero = 0;
long long int var_19 = -845034691231955881LL;
unsigned int var_20 = 2473955892U;
unsigned short var_21 = (unsigned short)15139;
long long int var_22 = 4408387777050716812LL;
unsigned int var_23 = 987248954U;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)-78;
_Bool var_26 = (_Bool)0;
int var_27 = 164583203;
unsigned long long int var_28 = 2916941032376797651ULL;
unsigned char var_29 = (unsigned char)198;
unsigned char var_30 = (unsigned char)48;
unsigned short var_31 = (unsigned short)48906;
unsigned long long int var_32 = 13247418417194833264ULL;
short var_33 = (short)-1781;
unsigned int var_34 = 2110805799U;
unsigned short var_35 = (unsigned short)23432;
unsigned long long int var_36 = 11505618365455286627ULL;
unsigned short arr_0 [21] ;
unsigned int arr_1 [21] [21] ;
unsigned char arr_2 [21] ;
long long int arr_4 [21] ;
unsigned short arr_5 [21] ;
unsigned int arr_6 [21] ;
short arr_7 [21] [21] [21] ;
int arr_10 [21] ;
signed char arr_16 [21] [21] [21] ;
unsigned short arr_17 [21] [21] [21] [21] [21] [21] ;
long long int arr_20 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)33012;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 1812411765U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 7994308328602378811LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)30309;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 85765386U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)398;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 1491674352;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)61875;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = -1461475039998674111LL;
}

void checksum() {
    hash(&seed, var_19);
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
