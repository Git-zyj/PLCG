#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14718507153774606146ULL;
unsigned char var_1 = (unsigned char)8;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)239;
signed char var_6 = (signed char)12;
unsigned char var_8 = (unsigned char)200;
long long int var_12 = -3074642024613367231LL;
unsigned char var_15 = (unsigned char)84;
int zero = 0;
unsigned char var_18 = (unsigned char)221;
unsigned char var_19 = (unsigned char)119;
int var_20 = -1743558912;
long long int var_21 = 8226547857401272429LL;
unsigned long long int var_22 = 4642834575518318999ULL;
unsigned short var_23 = (unsigned short)1176;
unsigned char arr_0 [21] [21] ;
int arr_1 [21] ;
unsigned char arr_4 [21] [21] [21] ;
unsigned long long int arr_5 [21] ;
signed char arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1929897805;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 4274203982096384710ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-32;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
