#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -62964257636098671LL;
long long int var_1 = -7169107163052287364LL;
unsigned char var_2 = (unsigned char)22;
int var_3 = 1233709465;
short var_4 = (short)-1333;
long long int var_11 = -3513099494474412396LL;
int zero = 0;
signed char var_12 = (signed char)123;
short var_13 = (short)-1706;
unsigned long long int var_14 = 13576467206067028277ULL;
long long int var_15 = -4999738001628073994LL;
unsigned int var_16 = 2248271842U;
unsigned int var_17 = 2690794834U;
long long int var_18 = 5601233536659886105LL;
unsigned long long int var_19 = 4166196465876112043ULL;
unsigned long long int var_20 = 2248067998906436768ULL;
long long int var_21 = 1674759580745039393LL;
unsigned char arr_1 [24] ;
unsigned int arr_3 [24] [24] ;
_Bool arr_6 [24] [24] [24] ;
signed char arr_8 [24] [24] [24] [24] ;
int arr_11 [20] [20] ;
signed char arr_13 [20] [20] ;
unsigned short arr_18 [11] ;
unsigned int arr_19 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 3442649196U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 1164713960 : 1517161129;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-42 : (signed char)86;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (unsigned short)45480;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = 2747959244U;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
