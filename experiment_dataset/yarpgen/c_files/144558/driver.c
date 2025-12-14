#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16776382555273792070ULL;
unsigned char var_12 = (unsigned char)4;
int var_15 = -1425194600;
short var_17 = (short)11270;
signed char var_18 = (signed char)83;
int zero = 0;
long long int var_19 = -1013188099850906393LL;
unsigned char var_20 = (unsigned char)129;
signed char var_21 = (signed char)-33;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)1100;
signed char var_24 = (signed char)-45;
long long int var_25 = -7456914915431249698LL;
int var_26 = 1323917853;
unsigned char var_27 = (unsigned char)223;
unsigned char var_28 = (unsigned char)199;
int var_29 = 1434892273;
unsigned char var_30 = (unsigned char)7;
_Bool arr_0 [15] [15] ;
unsigned long long int arr_3 [15] ;
unsigned int arr_5 [15] [15] [15] ;
unsigned long long int arr_8 [15] [15] [15] [15] [15] [15] ;
unsigned int arr_10 [16] ;
int arr_11 [16] ;
unsigned int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 8634119628730575703ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 237606915U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 11374043053150611386ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 2623153811U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 672408547;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 481946049U;
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
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
