#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8967432986875812994ULL;
int var_1 = -860316791;
short var_2 = (short)-29640;
short var_3 = (short)1187;
unsigned long long int var_5 = 17184967047761368491ULL;
signed char var_7 = (signed char)49;
unsigned short var_8 = (unsigned short)58900;
unsigned short var_11 = (unsigned short)46881;
unsigned short var_12 = (unsigned short)59582;
int zero = 0;
unsigned int var_15 = 930095036U;
long long int var_16 = -1197415251119806636LL;
unsigned long long int var_17 = 824744458986167542ULL;
signed char var_18 = (signed char)54;
unsigned long long int var_19 = 3616863117982599710ULL;
unsigned char var_20 = (unsigned char)168;
unsigned int var_21 = 578063293U;
int var_22 = -2123897753;
unsigned long long int var_23 = 15447172672974354667ULL;
short var_24 = (short)7462;
unsigned short arr_0 [24] [24] ;
unsigned int arr_1 [24] [24] ;
unsigned int arr_4 [24] ;
unsigned long long int arr_5 [24] ;
short arr_7 [24] ;
short arr_10 [17] [17] ;
short arr_11 [17] [17] [17] ;
unsigned int arr_14 [17] ;
int arr_2 [24] ;
_Bool arr_3 [24] [24] ;
unsigned short arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)65029;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 370297544U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1267840202U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 7201085785344333313ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (short)27953;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (short)20036;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)-21486;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = 2239621110U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -698035695 : -1536569982;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned short)6096;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
