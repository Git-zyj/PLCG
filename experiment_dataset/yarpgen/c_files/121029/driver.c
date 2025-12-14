#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)181;
long long int var_3 = 8802708876593576368LL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 776173989U;
_Bool var_6 = (_Bool)1;
unsigned short var_10 = (unsigned short)63115;
unsigned char var_11 = (unsigned char)174;
unsigned char var_13 = (unsigned char)14;
int var_14 = 1817250630;
unsigned int var_15 = 3156175458U;
signed char var_16 = (signed char)111;
unsigned char var_17 = (unsigned char)255;
int zero = 0;
unsigned char var_18 = (unsigned char)253;
unsigned short var_19 = (unsigned short)15622;
int var_20 = 1388386475;
unsigned int var_21 = 4227548806U;
short var_22 = (short)-18257;
unsigned char var_23 = (unsigned char)216;
unsigned short var_24 = (unsigned short)49754;
unsigned short var_25 = (unsigned short)49358;
int arr_0 [24] [24] ;
int arr_3 [24] ;
unsigned char arr_4 [24] ;
unsigned short arr_6 [24] [24] [24] [24] ;
_Bool arr_7 [24] ;
unsigned char arr_8 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1056406007 : 2055584660;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -755838498;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)10486;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)235 : (unsigned char)36;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
