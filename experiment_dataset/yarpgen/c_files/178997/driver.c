#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 867001483;
unsigned char var_1 = (unsigned char)65;
unsigned int var_2 = 1591840926U;
int var_3 = 382526419;
signed char var_4 = (signed char)-92;
unsigned short var_5 = (unsigned short)33673;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)32332;
unsigned char var_9 = (unsigned char)164;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)58011;
unsigned long long int var_13 = 15303602126288925123ULL;
signed char var_14 = (signed char)-93;
signed char var_15 = (signed char)34;
int zero = 0;
unsigned short var_17 = (unsigned short)11924;
int var_18 = 1873877728;
unsigned char var_19 = (unsigned char)157;
_Bool var_20 = (_Bool)1;
unsigned int arr_0 [18] [18] ;
unsigned short arr_1 [18] ;
unsigned char arr_2 [18] ;
short arr_3 [18] [18] ;
unsigned short arr_6 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 1915845538U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43729 : (unsigned short)15267;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)254 : (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-31635 : (short)-23308;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)39975 : (unsigned short)58959;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
