#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)99;
_Bool var_1 = (_Bool)1;
short var_4 = (short)32568;
signed char var_9 = (signed char)-81;
_Bool var_11 = (_Bool)0;
short var_16 = (short)-10141;
int zero = 0;
short var_18 = (short)-28250;
unsigned char var_19 = (unsigned char)0;
unsigned short var_20 = (unsigned short)50198;
unsigned char var_21 = (unsigned char)141;
unsigned char var_22 = (unsigned char)78;
unsigned int var_23 = 3417460673U;
unsigned char var_24 = (unsigned char)127;
unsigned char var_25 = (unsigned char)158;
signed char var_26 = (signed char)-69;
unsigned int var_27 = 3332688449U;
unsigned int var_28 = 1784588466U;
unsigned char arr_1 [11] ;
unsigned char arr_3 [11] ;
unsigned int arr_4 [11] [11] ;
signed char arr_8 [11] ;
unsigned short arr_10 [20] ;
_Bool arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 3349717484U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)41426 : (unsigned short)58848;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
