#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2864;
int var_1 = -1483855639;
signed char var_2 = (signed char)49;
unsigned short var_3 = (unsigned short)37246;
long long int var_4 = 22004195516040619LL;
short var_5 = (short)14703;
unsigned long long int var_6 = 2795233216869669113ULL;
unsigned short var_7 = (unsigned short)62444;
int var_10 = 2032076892;
unsigned int var_11 = 1806656127U;
signed char var_12 = (signed char)123;
unsigned short var_13 = (unsigned short)9966;
unsigned int var_14 = 2647999773U;
unsigned int var_15 = 2610743927U;
short var_16 = (short)-31456;
unsigned long long int var_17 = 11206428797818298644ULL;
unsigned short var_18 = (unsigned short)17025;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1845249342U;
signed char var_21 = (signed char)-95;
unsigned long long int var_22 = 10199506550133726865ULL;
long long int var_23 = -437364647749444569LL;
short var_24 = (short)6172;
unsigned long long int var_25 = 1601513164129026866ULL;
unsigned char var_26 = (unsigned char)82;
unsigned short var_27 = (unsigned short)43316;
long long int var_28 = 5330618973643655021LL;
short arr_0 [12] ;
unsigned int arr_1 [12] ;
signed char arr_3 [12] ;
long long int arr_4 [12] [12] ;
signed char arr_11 [13] ;
unsigned char arr_15 [21] ;
int arr_16 [21] ;
unsigned long long int arr_18 [21] [21] ;
unsigned long long int arr_19 [21] ;
unsigned int arr_13 [13] ;
int arr_14 [13] ;
short arr_17 [21] ;
int arr_21 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)22386;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1566065410U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 2792051357486002772LL : 3875906229145458021LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = -1536500380;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 4128060482999425155ULL : 14489439092077116373ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 18345321464097710847ULL : 11461631447522982552ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = 3801440306U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = -1213061453;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (short)-32213;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? -70151067 : -531140847;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
