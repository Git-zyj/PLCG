#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1600457719;
unsigned short var_1 = (unsigned short)18101;
unsigned char var_2 = (unsigned char)52;
_Bool var_3 = (_Bool)1;
short var_4 = (short)23441;
int var_5 = -285006220;
int var_7 = -2089820968;
unsigned short var_8 = (unsigned short)42063;
unsigned char var_9 = (unsigned char)207;
long long int var_11 = -7798185358880542693LL;
unsigned long long int var_12 = 802002283123541941ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)104;
unsigned short var_14 = (unsigned short)31447;
long long int var_15 = -174195300895527336LL;
long long int var_16 = 3008902980161642494LL;
unsigned char var_17 = (unsigned char)148;
unsigned char var_18 = (unsigned char)165;
int var_19 = 220017578;
unsigned long long int arr_0 [23] [23] ;
unsigned char arr_1 [23] ;
_Bool arr_2 [23] ;
unsigned long long int arr_3 [21] ;
unsigned short arr_4 [21] ;
_Bool arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 5288839695145783689ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 17066417369389521784ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned short)53823;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
