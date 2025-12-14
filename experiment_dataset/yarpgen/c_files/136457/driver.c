#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 492181130;
int var_3 = -1939439246;
int var_4 = 2144507447;
int var_8 = -2012868896;
short var_9 = (short)14838;
int var_11 = 1225469303;
unsigned char var_12 = (unsigned char)165;
int var_13 = 407597222;
int zero = 0;
unsigned short var_17 = (unsigned short)55817;
unsigned short var_18 = (unsigned short)17296;
signed char var_19 = (signed char)-10;
int var_20 = -1577974699;
short var_21 = (short)28324;
int arr_0 [14] ;
unsigned int arr_2 [14] [14] [14] ;
unsigned int arr_4 [14] [14] ;
unsigned long long int arr_5 [14] [14] [14] ;
unsigned char arr_6 [14] ;
unsigned short arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -1612813050;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 2705508186U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 1291832406U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3195777088877487620ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6801 : (unsigned short)1052;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
