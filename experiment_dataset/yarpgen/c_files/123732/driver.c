#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3170077336U;
short var_2 = (short)-19958;
short var_3 = (short)24302;
unsigned short var_4 = (unsigned short)33513;
unsigned short var_10 = (unsigned short)64987;
short var_12 = (short)22133;
unsigned short var_14 = (unsigned short)44121;
unsigned short var_17 = (unsigned short)10663;
int zero = 0;
unsigned long long int var_18 = 17372045062071076030ULL;
unsigned int var_19 = 683701575U;
unsigned short var_20 = (unsigned short)10100;
unsigned int var_21 = 4249724264U;
signed char var_22 = (signed char)104;
unsigned long long int var_23 = 12266576295525094511ULL;
_Bool var_24 = (_Bool)1;
unsigned short arr_0 [15] ;
signed char arr_2 [15] [15] ;
unsigned short arr_4 [15] [15] [15] ;
signed char arr_9 [17] ;
unsigned int arr_12 [17] ;
short arr_5 [15] [15] ;
unsigned int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)60585;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)21838;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 1909542789U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (short)5425;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 1280434720U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
