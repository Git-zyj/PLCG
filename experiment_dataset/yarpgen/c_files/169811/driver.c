#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4940836017159715243ULL;
short var_4 = (short)4630;
unsigned char var_5 = (unsigned char)17;
long long int var_8 = -1097429241286120917LL;
short var_13 = (short)-17143;
_Bool var_14 = (_Bool)1;
int var_16 = 1018673789;
int zero = 0;
short var_17 = (short)-17427;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2248186536U;
unsigned char var_20 = (unsigned char)8;
signed char var_21 = (signed char)-11;
unsigned short var_22 = (unsigned short)61022;
unsigned char var_23 = (unsigned char)8;
unsigned long long int var_24 = 14963845679674748909ULL;
signed char var_25 = (signed char)-121;
unsigned int var_26 = 927490360U;
short var_27 = (short)-3837;
short var_28 = (short)320;
short arr_0 [11] [11] ;
long long int arr_1 [11] [11] ;
unsigned short arr_2 [14] ;
short arr_3 [14] ;
int arr_11 [14] [14] ;
unsigned int arr_4 [14] [14] ;
int arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (short)26180;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = -6550879231539912370LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)42723;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (short)-27260;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? -1085636325 : -1871638495;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 2028113913U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = -562529714;
}

void checksum() {
    hash(&seed, var_17);
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
