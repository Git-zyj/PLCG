#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
signed char var_1 = (signed char)110;
unsigned long long int var_2 = 7108762731622197595ULL;
signed char var_4 = (signed char)105;
unsigned long long int var_5 = 1103422521455245772ULL;
int var_7 = 2117506255;
unsigned long long int var_8 = 3214963541564337221ULL;
int var_9 = -1345445531;
unsigned int var_12 = 988811046U;
int var_16 = 1641626891;
int zero = 0;
unsigned int var_18 = 1283126059U;
unsigned long long int var_19 = 6455576589274957738ULL;
signed char var_20 = (signed char)-82;
int var_21 = 1953854752;
int var_22 = 755405388;
unsigned long long int var_23 = 14232140485220793945ULL;
int arr_0 [11] ;
unsigned long long int arr_3 [11] [11] ;
int arr_4 [11] ;
signed char arr_5 [11] [11] [11] ;
int arr_6 [11] [11] [11] ;
signed char arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -2025870742;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 663176317898925950ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -4212121;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1883560302;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-118;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
