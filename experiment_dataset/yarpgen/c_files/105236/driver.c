#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23526;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
short var_3 = (short)16966;
long long int var_6 = 2681673242980314463LL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-11;
unsigned long long int var_10 = 2892125250983804775ULL;
unsigned short var_11 = (unsigned short)52748;
unsigned char var_12 = (unsigned char)183;
short var_13 = (short)-17398;
unsigned char var_14 = (unsigned char)175;
unsigned long long int var_15 = 15881691355415281866ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)56158;
signed char var_17 = (signed char)116;
signed char var_18 = (signed char)18;
short var_19 = (short)10358;
int var_20 = -170441418;
short var_21 = (short)21477;
short var_22 = (short)-9724;
unsigned short var_23 = (unsigned short)3595;
unsigned long long int var_24 = 16823033272204320177ULL;
signed char var_25 = (signed char)-107;
short var_26 = (short)-7902;
unsigned short var_27 = (unsigned short)45250;
signed char var_28 = (signed char)-34;
unsigned short var_29 = (unsigned short)1789;
int var_30 = 2026624238;
int arr_0 [16] [16] ;
short arr_1 [16] [16] ;
unsigned short arr_3 [12] ;
short arr_5 [21] [21] ;
signed char arr_6 [21] [21] ;
signed char arr_7 [21] ;
unsigned int arr_12 [18] ;
unsigned short arr_13 [18] ;
unsigned short arr_2 [16] ;
unsigned int arr_8 [21] [21] ;
unsigned short arr_19 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 1460970373;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)20605;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)14997;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-23105;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 1817437770U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (unsigned short)15734;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)33643;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 104415923U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned short)15955;
}

void checksum() {
    hash(&seed, var_16);
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
