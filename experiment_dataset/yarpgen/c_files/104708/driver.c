#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)7841;
unsigned short var_6 = (unsigned short)2140;
unsigned long long int var_8 = 266400914113300625ULL;
unsigned long long int var_15 = 15620598218932154870ULL;
unsigned short var_16 = (unsigned short)15178;
unsigned short var_17 = (unsigned short)9057;
int zero = 0;
unsigned long long int var_19 = 913985279768333990ULL;
unsigned short var_20 = (unsigned short)7858;
unsigned long long int var_21 = 9233472343635397661ULL;
unsigned short var_22 = (unsigned short)44662;
unsigned short arr_0 [11] ;
unsigned short arr_1 [11] [11] ;
unsigned short arr_2 [11] [11] [11] ;
unsigned short arr_3 [11] [11] ;
unsigned long long int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)64031;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)64561;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)14573;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)48433;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 14763654364097577084ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
