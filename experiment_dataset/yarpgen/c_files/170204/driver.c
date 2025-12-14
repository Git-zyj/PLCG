#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1854726513U;
unsigned char var_1 = (unsigned char)157;
short var_5 = (short)24415;
unsigned int var_7 = 3679380926U;
unsigned int var_8 = 2544210825U;
unsigned char var_9 = (unsigned char)207;
unsigned short var_10 = (unsigned short)7517;
unsigned int var_15 = 2480924306U;
short var_16 = (short)-11840;
unsigned char var_17 = (unsigned char)51;
int zero = 0;
unsigned char var_18 = (unsigned char)57;
short var_19 = (short)1646;
unsigned short var_20 = (unsigned short)52555;
long long int var_21 = -473978865832367792LL;
unsigned char var_22 = (unsigned char)210;
unsigned char var_23 = (unsigned char)197;
unsigned int var_24 = 1030436924U;
unsigned char arr_0 [18] ;
long long int arr_1 [18] ;
short arr_2 [18] [18] [18] ;
unsigned char arr_3 [18] [18] ;
unsigned short arr_4 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)210 : (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 5781041813580106774LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-14045 : (short)-2254;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)41201 : (unsigned short)49732;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
