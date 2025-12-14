#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5182356717127411209ULL;
unsigned long long int var_8 = 17889690376186553495ULL;
unsigned short var_10 = (unsigned short)1276;
unsigned char var_11 = (unsigned char)231;
unsigned short var_12 = (unsigned short)9860;
long long int var_15 = -6817140189325770445LL;
unsigned short var_17 = (unsigned short)31363;
int zero = 0;
signed char var_20 = (signed char)-8;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-125;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)41;
unsigned int var_25 = 3491118095U;
int var_26 = -445844426;
unsigned long long int var_27 = 5791713078300095923ULL;
unsigned char var_28 = (unsigned char)228;
unsigned short var_29 = (unsigned short)45134;
unsigned char arr_0 [11] ;
short arr_1 [11] ;
int arr_2 [11] [11] ;
long long int arr_5 [11] [11] ;
unsigned short arr_3 [11] ;
unsigned long long int arr_6 [11] ;
unsigned char arr_11 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)28003;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 984877866;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = -5832598360523431089LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)47709;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 16276406959471986576ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)192 : (unsigned char)1;
}

void checksum() {
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
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
