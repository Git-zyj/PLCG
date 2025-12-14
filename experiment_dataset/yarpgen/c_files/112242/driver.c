#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)77;
long long int var_2 = 3335830877910962248LL;
unsigned char var_4 = (unsigned char)156;
short var_5 = (short)-25671;
unsigned char var_6 = (unsigned char)119;
unsigned short var_7 = (unsigned short)6192;
long long int var_8 = 6552981757567322932LL;
_Bool var_16 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)-22152;
short var_20 = (short)-16793;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)49;
unsigned short var_23 = (unsigned short)49044;
short var_24 = (short)-21577;
unsigned int var_25 = 862829594U;
signed char var_26 = (signed char)-1;
long long int var_27 = -9042929907276905924LL;
unsigned short var_28 = (unsigned short)15779;
unsigned short var_29 = (unsigned short)41463;
int var_30 = -1941208278;
unsigned short var_31 = (unsigned short)14213;
long long int var_32 = -3005035203530301274LL;
_Bool var_33 = (_Bool)0;
long long int var_34 = 78394017994418000LL;
unsigned short var_35 = (unsigned short)36831;
unsigned char var_36 = (unsigned char)141;
unsigned long long int arr_0 [18] [18] ;
short arr_2 [18] [18] [18] ;
short arr_3 [18] [18] [18] ;
signed char arr_4 [18] [18] ;
unsigned char arr_7 [16] ;
signed char arr_11 [16] [16] ;
unsigned int arr_14 [16] [16] [16] ;
_Bool arr_18 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 16886474064900819616ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)21833;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)12442;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 1310890114U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
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
