#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)104;
signed char var_1 = (signed char)-123;
unsigned int var_2 = 479569791U;
unsigned int var_3 = 905275287U;
short var_4 = (short)27101;
int var_5 = -1321840583;
unsigned int var_6 = 1805156153U;
signed char var_10 = (signed char)-82;
int zero = 0;
unsigned char var_11 = (unsigned char)174;
unsigned char var_12 = (unsigned char)96;
unsigned int var_13 = 1726167060U;
unsigned long long int var_14 = 14649103087847084537ULL;
unsigned char var_15 = (unsigned char)36;
_Bool var_16 = (_Bool)1;
int var_17 = -297195493;
long long int var_18 = -8505557540634237271LL;
int var_19 = -2053364957;
unsigned long long int var_20 = 11851860054182359475ULL;
unsigned char var_21 = (unsigned char)208;
int var_22 = -315338418;
short arr_0 [22] ;
unsigned long long int arr_1 [22] ;
unsigned char arr_3 [22] [22] ;
unsigned char arr_4 [22] ;
int arr_7 [22] ;
unsigned int arr_8 [22] [22] ;
unsigned int arr_11 [22] [22] ;
signed char arr_2 [22] [22] ;
unsigned int arr_12 [22] [22] ;
unsigned short arr_23 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)-32744;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 4183697578813305458ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -1218893760;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 3311719458U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = 3522962558U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = 3129892838U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned short)18339 : (unsigned short)52218;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
