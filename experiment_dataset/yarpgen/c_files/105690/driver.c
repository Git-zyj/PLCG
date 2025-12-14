#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20933;
long long int var_1 = 8319857494926865066LL;
short var_4 = (short)-21451;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-1435;
signed char var_8 = (signed char)20;
unsigned short var_9 = (unsigned short)58480;
signed char var_12 = (signed char)-77;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 753881060;
unsigned int var_15 = 2389665643U;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int var_18 = 1814665558;
signed char var_19 = (signed char)86;
unsigned char var_20 = (unsigned char)12;
short var_21 = (short)5362;
unsigned short var_22 = (unsigned short)23367;
unsigned int var_23 = 3036542222U;
short arr_1 [21] ;
unsigned int arr_2 [21] ;
signed char arr_5 [18] [18] ;
short arr_6 [18] ;
_Bool arr_3 [21] ;
signed char arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-11117;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2884798056U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (short)1790;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (signed char)-27;
}

void checksum() {
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
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
