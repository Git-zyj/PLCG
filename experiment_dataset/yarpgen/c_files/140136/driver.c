#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44694;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)8349;
unsigned short var_5 = (unsigned short)13409;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)82;
unsigned long long int var_8 = 12514108784567890518ULL;
unsigned long long int var_10 = 10194027508546977709ULL;
int var_11 = -1880732291;
short var_12 = (short)-5844;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)-23039;
unsigned short var_19 = (unsigned short)40016;
signed char var_20 = (signed char)23;
signed char var_21 = (signed char)55;
signed char var_22 = (signed char)-8;
unsigned short var_23 = (unsigned short)23464;
unsigned short var_24 = (unsigned short)41924;
int var_25 = 1266497588;
unsigned char var_26 = (unsigned char)73;
unsigned char var_27 = (unsigned char)66;
unsigned short var_28 = (unsigned short)4637;
_Bool var_29 = (_Bool)1;
unsigned short arr_0 [11] ;
unsigned short arr_1 [11] [11] ;
unsigned short arr_3 [11] [11] ;
short arr_5 [11] [11] ;
_Bool arr_7 [11] [11] [11] ;
signed char arr_8 [11] ;
unsigned char arr_12 [11] [11] [11] ;
signed char arr_14 [11] [11] [11] ;
short arr_21 [11] ;
unsigned short arr_27 [11] [11] [11] ;
unsigned short arr_13 [11] ;
_Bool arr_17 [11] [11] [11] ;
_Bool arr_22 [11] [11] [11] [11] ;
unsigned short arr_23 [11] ;
short arr_28 [11] ;
unsigned short arr_29 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)33636;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)41563;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)56103;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (short)5614;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (short)7994;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (unsigned short)48262;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (unsigned short)24622;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = (unsigned short)63632;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_28 [i_0] = (short)13299;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_29 [i_0] = (unsigned short)15628;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
