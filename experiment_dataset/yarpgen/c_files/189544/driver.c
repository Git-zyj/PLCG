#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 986737473949879392LL;
int var_2 = -1575719662;
int var_4 = -1980830474;
unsigned char var_7 = (unsigned char)153;
unsigned short var_8 = (unsigned short)21870;
unsigned int var_9 = 1520502593U;
short var_10 = (short)7655;
signed char var_14 = (signed char)24;
unsigned long long int var_15 = 3740810200007717570ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)56518;
unsigned short var_19 = (unsigned short)10740;
unsigned short var_20 = (unsigned short)62013;
unsigned char var_21 = (unsigned char)71;
int var_22 = 1492781845;
signed char arr_0 [25] [25] ;
signed char arr_1 [25] ;
int arr_3 [18] ;
unsigned char arr_5 [18] ;
int arr_2 [25] ;
_Bool arr_6 [18] ;
unsigned long long int arr_7 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 31771280;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 740703533;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 14496994992303055907ULL : 7934177132260366828ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
