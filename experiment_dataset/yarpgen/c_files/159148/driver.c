#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10083;
long long int var_1 = -3966631844285399278LL;
short var_2 = (short)-6638;
unsigned long long int var_3 = 10371438762477627985ULL;
long long int var_5 = -6695440980229672210LL;
short var_6 = (short)-3257;
short var_7 = (short)4466;
short var_8 = (short)30822;
unsigned char var_9 = (unsigned char)68;
unsigned short var_10 = (unsigned short)630;
unsigned long long int var_11 = 897852081087357771ULL;
int zero = 0;
int var_12 = -582044079;
long long int var_13 = -5851793861921006008LL;
signed char var_14 = (signed char)70;
unsigned long long int var_15 = 15467882981353307856ULL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)15543;
unsigned long long int var_18 = 2568614690820195948ULL;
unsigned long long int var_19 = 18433907936845982013ULL;
unsigned char var_20 = (unsigned char)172;
signed char arr_2 [12] [12] ;
long long int arr_5 [12] ;
unsigned long long int arr_6 [12] ;
int arr_7 [12] ;
unsigned long long int arr_8 [12] ;
signed char arr_11 [12] [12] [12] ;
unsigned short arr_14 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 8180003734221522027LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 13137967288458244084ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = -691276070;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 8889589518817618690ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (unsigned short)5479;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
