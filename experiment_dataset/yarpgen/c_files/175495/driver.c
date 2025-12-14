#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2534302787U;
unsigned short var_3 = (unsigned short)24068;
unsigned short var_4 = (unsigned short)7982;
unsigned short var_5 = (unsigned short)19718;
unsigned short var_8 = (unsigned short)26569;
unsigned short var_11 = (unsigned short)51421;
unsigned short var_12 = (unsigned short)14372;
unsigned int var_14 = 1135652534U;
unsigned int var_17 = 3138289592U;
signed char var_18 = (signed char)-127;
int zero = 0;
unsigned short var_19 = (unsigned short)46264;
unsigned int var_20 = 3669817751U;
unsigned int var_21 = 3451064832U;
unsigned short var_22 = (unsigned short)23973;
unsigned short var_23 = (unsigned short)19694;
unsigned short var_24 = (unsigned short)6821;
unsigned int var_25 = 431685360U;
unsigned short var_26 = (unsigned short)6647;
unsigned short var_27 = (unsigned short)15447;
unsigned short var_28 = (unsigned short)17861;
unsigned int var_29 = 777662980U;
unsigned short arr_0 [20] ;
unsigned short arr_1 [20] ;
unsigned int arr_3 [18] ;
unsigned short arr_4 [18] [18] ;
unsigned int arr_2 [20] [20] ;
unsigned int arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)21846;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29799 : (unsigned short)40504;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 1112967118U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)62202;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 128303553U : 1667325646U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 1697132722U;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
