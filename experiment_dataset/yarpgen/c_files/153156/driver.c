#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)28;
unsigned int var_4 = 582956473U;
signed char var_6 = (signed char)-63;
unsigned long long int var_10 = 11428556395294635123ULL;
short var_12 = (short)-28306;
unsigned short var_13 = (unsigned short)25499;
signed char var_16 = (signed char)54;
int zero = 0;
unsigned long long int var_18 = 17651063775742019195ULL;
short var_19 = (short)24255;
short var_20 = (short)-32217;
unsigned int var_21 = 1166230137U;
unsigned short var_22 = (unsigned short)30373;
signed char var_23 = (signed char)105;
signed char var_24 = (signed char)-99;
unsigned int var_25 = 4193319742U;
long long int var_26 = 8489927426101603266LL;
short var_27 = (short)28601;
unsigned int var_28 = 3352665144U;
unsigned short arr_0 [16] ;
unsigned short arr_1 [16] ;
unsigned long long int arr_3 [16] ;
unsigned long long int arr_6 [20] [20] ;
_Bool arr_7 [20] [20] ;
unsigned int arr_9 [21] ;
unsigned short arr_2 [16] ;
unsigned char arr_5 [16] ;
unsigned long long int arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)64105;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)5272;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 10474592579525926412ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 16142387773945172160ULL : 2168821890072922111ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 121709702U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)24103;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 14990590550676563944ULL : 3992128584554661484ULL;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
