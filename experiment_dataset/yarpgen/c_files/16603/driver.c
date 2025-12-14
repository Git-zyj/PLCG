#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29566;
unsigned int var_2 = 1225477188U;
_Bool var_4 = (_Bool)1;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2748634580U;
int zero = 0;
int var_19 = 1011744857;
unsigned short var_20 = (unsigned short)24121;
unsigned short var_21 = (unsigned short)28132;
unsigned int var_22 = 351553018U;
_Bool var_23 = (_Bool)1;
long long int var_24 = -5611379191931288119LL;
unsigned char var_25 = (unsigned char)40;
signed char var_26 = (signed char)4;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 3662096683U;
long long int var_29 = -765174304248796220LL;
_Bool var_30 = (_Bool)1;
short var_31 = (short)-23585;
long long int var_32 = -2122686749583299898LL;
unsigned short var_33 = (unsigned short)23069;
unsigned short var_34 = (unsigned short)57598;
long long int arr_1 [11] ;
long long int arr_2 [11] ;
_Bool arr_6 [11] [11] [11] ;
unsigned short arr_7 [11] [11] [11] [11] ;
long long int arr_11 [11] [11] [11] [11] ;
int arr_12 [11] [11] ;
_Bool arr_14 [11] [11] [11] ;
unsigned long long int arr_15 [11] [11] [11] ;
unsigned short arr_21 [18] [18] ;
signed char arr_23 [18] ;
long long int arr_24 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -6126274949490498469LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -8325326779881188416LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)63184;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 1541110287373075667LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = 406205396;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 15618076914036652913ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)24027;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = -8863753814502937842LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
