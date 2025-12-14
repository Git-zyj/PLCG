#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42555;
unsigned int var_1 = 1409692131U;
long long int var_5 = 4211804717906860268LL;
unsigned int var_6 = 3474758014U;
unsigned int var_7 = 1666099992U;
signed char var_9 = (signed char)-42;
unsigned int var_10 = 4019898U;
signed char var_11 = (signed char)-54;
unsigned long long int var_12 = 2691654694759664306ULL;
long long int var_14 = 7097154869999782467LL;
unsigned short var_15 = (unsigned short)28564;
unsigned int var_16 = 743274343U;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_19 = (short)-8797;
signed char var_20 = (signed char)-59;
signed char var_21 = (signed char)18;
unsigned long long int var_22 = 16087107634531461252ULL;
unsigned char var_23 = (unsigned char)180;
unsigned int arr_1 [16] [16] ;
_Bool arr_2 [16] ;
short arr_4 [16] [16] [16] ;
unsigned int arr_5 [16] [16] ;
signed char arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 2121657895U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-9061 : (short)29936;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 2047967531U : 1986822662U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-53 : (signed char)118;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
