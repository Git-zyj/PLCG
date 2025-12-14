#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52991;
int var_1 = -1310180147;
signed char var_2 = (signed char)127;
unsigned char var_3 = (unsigned char)202;
unsigned short var_6 = (unsigned short)19467;
unsigned short var_7 = (unsigned short)15832;
unsigned char var_8 = (unsigned char)46;
long long int var_17 = -6843206615622684291LL;
int zero = 0;
unsigned char var_19 = (unsigned char)182;
unsigned short var_20 = (unsigned short)64030;
long long int var_21 = 5435579403240787463LL;
short var_22 = (short)17257;
signed char var_23 = (signed char)44;
short var_24 = (short)16634;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)62466;
unsigned long long int var_27 = 2488162211502381139ULL;
signed char var_28 = (signed char)-124;
unsigned short arr_7 [11] ;
short arr_8 [11] [11] [11] [11] [11] ;
short arr_16 [11] [11] [11] [11] ;
unsigned char arr_21 [13] ;
unsigned char arr_22 [13] ;
signed char arr_29 [13] [13] [13] [13] ;
long long int arr_31 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23801 : (unsigned short)21137;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-13217;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (short)193;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 6017480042041125887LL : 5326907662991650932LL;
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
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
