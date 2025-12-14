#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2121;
unsigned int var_1 = 2241771046U;
long long int var_2 = 5385829255583076880LL;
signed char var_3 = (signed char)-31;
int var_4 = 1166254210;
signed char var_5 = (signed char)-52;
signed char var_7 = (signed char)101;
long long int var_8 = -6966946585186195914LL;
int zero = 0;
int var_12 = 529259134;
int var_13 = 1227149274;
signed char var_14 = (signed char)-11;
int var_15 = 1443376358;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)74;
int var_18 = 1657441764;
unsigned char var_19 = (unsigned char)177;
int var_20 = -2107823772;
_Bool var_21 = (_Bool)1;
short arr_0 [11] [11] ;
_Bool arr_1 [11] ;
int arr_4 [11] ;
unsigned short arr_6 [11] ;
signed char arr_8 [11] [11] [11] [11] ;
signed char arr_2 [11] [11] ;
signed char arr_14 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-5143;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -1897700533;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)16531;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (signed char)-98;
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
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
