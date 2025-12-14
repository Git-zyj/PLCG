#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 511720959U;
signed char var_3 = (signed char)27;
unsigned char var_5 = (unsigned char)214;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1772015665U;
unsigned int var_8 = 3507064417U;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-79;
unsigned char var_12 = (unsigned char)78;
short var_13 = (short)8691;
long long int var_14 = -3863303599300178008LL;
unsigned int var_15 = 1648507373U;
signed char var_16 = (signed char)108;
_Bool var_17 = (_Bool)1;
long long int var_18 = -6589775286942813314LL;
int zero = 0;
signed char var_19 = (signed char)-32;
int var_20 = 1083581215;
short var_21 = (short)-11846;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-24850;
long long int var_24 = 6116866284904772790LL;
short var_25 = (short)-3654;
unsigned char var_26 = (unsigned char)25;
short var_27 = (short)29441;
unsigned long long int var_28 = 18087108337130093382ULL;
int var_29 = -127612336;
_Bool arr_0 [20] ;
unsigned short arr_1 [20] ;
signed char arr_2 [20] ;
unsigned long long int arr_5 [20] ;
long long int arr_6 [20] [20] ;
_Bool arr_8 [20] ;
unsigned int arr_3 [20] [20] ;
_Bool arr_9 [20] [20] ;
unsigned int arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)12696;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 8322038034531371144ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = -5536783698094941400LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 1900222539U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 3526973621U;
}

void checksum() {
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
