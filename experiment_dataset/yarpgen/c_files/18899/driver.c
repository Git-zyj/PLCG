#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1706992617U;
signed char var_5 = (signed char)-83;
unsigned int var_6 = 3214578089U;
unsigned int var_7 = 3420266246U;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 130297086U;
_Bool var_11 = (_Bool)1;
unsigned char var_16 = (unsigned char)221;
int zero = 0;
signed char var_17 = (signed char)8;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1841321817U;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 18170408881651463885ULL;
unsigned long long int var_23 = 11848241957794821344ULL;
unsigned char var_24 = (unsigned char)14;
unsigned long long int var_25 = 7470065971758618678ULL;
unsigned long long int var_26 = 18365551658220248531ULL;
unsigned char arr_0 [18] ;
short arr_1 [18] ;
unsigned long long int arr_4 [18] [18] [18] ;
_Bool arr_5 [18] ;
unsigned long long int arr_7 [18] [18] [18] ;
short arr_8 [18] [18] [18] ;
unsigned char arr_14 [18] [18] [18] [18] [18] ;
signed char arr_16 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)3795;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3926865200369730454ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 16239668109972267787ULL : 1792424606691899021ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)32545 : (short)17958;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)199 : (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (signed char)-7;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
