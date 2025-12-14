#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 640967150;
unsigned long long int var_2 = 18108799000369435287ULL;
signed char var_3 = (signed char)114;
int var_5 = 1545093823;
unsigned char var_6 = (unsigned char)63;
unsigned int var_7 = 2633690795U;
unsigned long long int var_10 = 3471709269625994670ULL;
short var_11 = (short)-6928;
unsigned int var_13 = 3163248923U;
int zero = 0;
unsigned int var_16 = 3744075899U;
short var_17 = (short)-23049;
signed char var_18 = (signed char)74;
unsigned long long int var_19 = 5227853128806934395ULL;
unsigned char var_20 = (unsigned char)239;
unsigned int var_21 = 1061454806U;
_Bool var_22 = (_Bool)1;
int var_23 = 1324901418;
unsigned int var_24 = 311838467U;
unsigned char var_25 = (unsigned char)89;
unsigned int arr_0 [19] ;
unsigned int arr_1 [19] ;
unsigned char arr_3 [19] [19] ;
unsigned int arr_4 [19] [19] ;
unsigned long long int arr_5 [19] [19] [19] ;
unsigned int arr_7 [19] [19] [19] [19] [19] ;
unsigned long long int arr_2 [19] ;
signed char arr_12 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 323481611U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 3521528759U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 983537557U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 13497300760439324468ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 343599246U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1447264262747054971ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)87;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
