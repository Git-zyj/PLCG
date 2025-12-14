#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3492054802U;
unsigned short var_8 = (unsigned short)9637;
unsigned long long int var_11 = 6428589358564137178ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)53173;
unsigned char var_19 = (unsigned char)142;
unsigned int var_20 = 331645374U;
unsigned int var_21 = 3919084266U;
unsigned char var_22 = (unsigned char)203;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)58512;
long long int var_25 = -1828741921427500285LL;
unsigned int var_26 = 164682964U;
unsigned int arr_0 [16] ;
unsigned short arr_1 [16] [16] ;
int arr_4 [23] [23] ;
short arr_5 [23] ;
unsigned int arr_6 [23] ;
signed char arr_2 [16] ;
unsigned int arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3475771911U : 168032006U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)4024 : (unsigned short)52715;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = -440787400;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)6124;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 2411215559U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)93 : (signed char)-87;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 3030890429U;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
