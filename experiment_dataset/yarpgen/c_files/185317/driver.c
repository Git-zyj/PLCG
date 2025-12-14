#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 811238789U;
int var_8 = -314096874;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)34409;
unsigned int var_14 = 1972764194U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)210;
short var_19 = (short)-9604;
unsigned char var_20 = (unsigned char)57;
unsigned short var_21 = (unsigned short)55448;
unsigned int var_22 = 1212656139U;
int var_23 = 304296869;
unsigned short var_24 = (unsigned short)41704;
unsigned long long int var_25 = 16931370182892534928ULL;
long long int var_26 = -7494893815137973357LL;
int var_27 = -230979670;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)6156;
unsigned int var_30 = 3240974366U;
int var_31 = 1359996349;
signed char var_32 = (signed char)-45;
_Bool var_33 = (_Bool)1;
unsigned short var_34 = (unsigned short)56957;
signed char var_35 = (signed char)-93;
unsigned char var_36 = (unsigned char)4;
unsigned short var_37 = (unsigned short)58085;
unsigned short var_38 = (unsigned short)60877;
unsigned long long int var_39 = 16503793522369870922ULL;
int var_40 = 185786661;
_Bool arr_0 [21] ;
unsigned long long int arr_1 [21] ;
unsigned int arr_3 [16] ;
int arr_4 [16] ;
int arr_5 [16] ;
int arr_6 [16] ;
short arr_7 [16] [16] ;
short arr_10 [16] ;
unsigned long long int arr_11 [16] [16] ;
int arr_21 [16] ;
long long int arr_2 [21] ;
signed char arr_8 [16] [16] ;
_Bool arr_18 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 6694740983331916118ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 4087932013U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -1475766300;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -1850772038;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 1836561614;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (short)16805;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (short)7008;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = 16125163663998646695ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = -523521207;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 3765287268939568387LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
