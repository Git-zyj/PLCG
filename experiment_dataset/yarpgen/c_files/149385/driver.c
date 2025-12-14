#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5895565133143006075LL;
long long int var_2 = -3334618834741361497LL;
signed char var_3 = (signed char)91;
long long int var_8 = 2221234957334984300LL;
unsigned short var_9 = (unsigned short)34233;
short var_10 = (short)-9633;
signed char var_11 = (signed char)-35;
short var_12 = (short)22060;
unsigned char var_14 = (unsigned char)97;
unsigned int var_15 = 549700254U;
int zero = 0;
unsigned char var_16 = (unsigned char)232;
short var_17 = (short)2849;
unsigned char var_18 = (unsigned char)180;
signed char var_19 = (signed char)-45;
short var_20 = (short)1507;
unsigned char var_21 = (unsigned char)155;
short var_22 = (short)24268;
unsigned short arr_0 [16] ;
unsigned short arr_1 [16] [16] ;
long long int arr_5 [21] ;
unsigned long long int arr_6 [21] ;
unsigned char arr_7 [21] [21] ;
unsigned short arr_9 [21] ;
unsigned short arr_10 [21] ;
short arr_3 [16] [16] ;
unsigned int arr_4 [16] ;
unsigned char arr_8 [21] ;
unsigned char arr_12 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)63288;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)6903;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -1444931900598808830LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 7001143022432650014ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned short)31700;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned short)9668;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-27344;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 1934861889U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (unsigned char)254;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
