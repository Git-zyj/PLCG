#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3303334741310762869LL;
unsigned short var_3 = (unsigned short)20250;
unsigned int var_7 = 272507628U;
unsigned long long int var_8 = 14419254451183476633ULL;
unsigned int var_11 = 2876169846U;
unsigned short var_14 = (unsigned short)27935;
unsigned char var_16 = (unsigned char)94;
int zero = 0;
int var_20 = -1965908428;
unsigned int var_21 = 1230554503U;
unsigned int var_22 = 1373912909U;
signed char var_23 = (signed char)-21;
unsigned char var_24 = (unsigned char)46;
unsigned int var_25 = 3819999161U;
unsigned int var_26 = 1831455762U;
unsigned char var_27 = (unsigned char)40;
long long int arr_0 [25] [25] ;
_Bool arr_1 [25] ;
unsigned long long int arr_2 [25] ;
signed char arr_3 [25] ;
_Bool arr_4 [25] [25] [25] ;
unsigned int arr_9 [17] ;
unsigned short arr_12 [17] [17] ;
unsigned long long int arr_13 [17] [17] [17] [17] ;
short arr_20 [22] ;
long long int arr_22 [22] ;
signed char arr_6 [25] [25] ;
_Bool arr_18 [17] ;
_Bool arr_19 [17] ;
unsigned char arr_23 [22] [22] ;
unsigned int arr_24 [22] ;
signed char arr_25 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -3438319792728725715LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 11186779732665173678ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 144449857U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)5546;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 2086226531348585861ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = (short)-11073;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = -2409183363233118473LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = 1926493709U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = (signed char)-36;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
